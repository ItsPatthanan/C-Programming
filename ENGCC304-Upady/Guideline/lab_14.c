#include <stdio.h>
#include <math.h>
typedef struct {
    char Name[ 15 ] ;
    int radius, height, volume ;
} cylinderStruct ;
int ReadCylinders( cylinderStruct C[] ) {
    FILE *fr ;
    int i = 0 ;
    
    fr = fopen( "cylinder.txt", "r" ) ;
    if( fr == NULL ) {
        printf( "Cannot open file! \n" ) ;
    } else {
        i = 0 ;
        while( fscanf( fr , "%s %d %d" , 
            C[i].Name, &C[i].radius, &C[i].height 
            ) != EOF ) { //EOF = End Of File
            i++ ;
        }//end while
        
        printf( "%d records read from cylinder.txt \n", i ) ;
        fclose( fr ) ;
    }//end if
    
    return i ;
}//end function
int WriteStat( char NMin[], int VMin, char NMax[], int VMax ) {
    FILE *fw ;
    int i = 0 ;
    fw = fopen( "c_stat.txt", "w+" ) ;
    if( fw == NULL ) {
        printf( "Cannot Open File! \n" ) ;
    } else {
        printf( "\n Statistic is writen to c_stat.txt \n" ) ;
        
        fprintf( fw, "The Biggest cylinder is %s, volume %d\n", NMax, VMax ) ;
        fprintf( fw, "The Smallest cylinder is %s, volume %d\n", NMin, VMin ) ;
        
        fclose( fw ) ;
        
    }//end if else
    
    return i ;
}//end function
void CylinderVolume( cylinderStruct C[], int N ) {
    int i ;
    for( i = 0 ; i < N ; i++ ) {
        C[ i ].volume = 3.1416 * C[ i ].radius 
            * C[ i ].radius 
            * C[ i ].height ;
    }//end for
}//end function
void PrintCylinders( cylinderStruct C[], int N ) {
    int i = 0 ;
    printf( "%-15s %10s %10s %10s \n", "Name", "Radius", "Height", "Volume" ) ;
    printf( "---------------|----------|----------|----------|\n" ) ;
    for( i = 0 ; i < N ; i++ ) {
        printf( "%-15s %10d %10d %10d \n", 
            C[i].Name, 
            C[i].radius, 
            C[i].height,
            C[i].volume 
        ) ;
    }//end for
}//end function
void FindMaxMinIndex( cylinderStruct C[], int *MinIndex, int *MaxIndex, int N ) {
    int i, Max = C[0].volume, Min = C[0].volume ;
    for( i = 0 ; i < N ; i++ ) {
        if( C[i].volume > Max ) {
            Max = C[i].volume ;
            *MaxIndex = i ;
        }//end if
        
        if( C[i].volume < Min ) {
            Min = C[i].volume ;
            *MinIndex = i ;
        }//end if
    }//end for
}//end function

void main( void ) {
    // char Name[10][15];
    // int radius[10], height[10], volume[10];
    
    cylinderStruct Cylinders[ 10 ] ;
    
    int MinIndex=0, MaxIndex=0, NumberOfCylinders;
    
    NumberOfCylinders = ReadCylinders( Cylinders );
    CylinderVolume(Cylinders, NumberOfCylinders);
    PrintCylinders(Cylinders, NumberOfCylinders);
    
    FindMaxMinIndex(Cylinders, &MinIndex, &MaxIndex, NumberOfCylinders);
    
    WriteStat( 
        Cylinders[MinIndex].Name, 
        Cylinders[MinIndex].volume, 
        Cylinders[MaxIndex].Name, 
        Cylinders[MaxIndex].volume ) ;
}//end function