#include <stdio.h>
#include <math.h>
int ReadCylinders( char N[][15], int r[], int h[] ) {
    FILE *fr ;
    int i = 0 ;
    
    fr = fopen( "cylinder.txt", "r" ) ;
    /**
     *  w = Write 
     *  r = Read
     *  a = Attend
    */
    if( fr == NULL ) {
        printf( "Cannot open file! \n" ) ;
    } else {
        i = 0 ;
        while( fscanf( fr , "%s %d %d" , N[i], &r[i], &h[i] ) != EOF ) { //EOF = End Of File
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
void CylinderVolume( int r[], int h[], int v[], int N ) {
    int i ;
    for( i = 0 ; i < N ; i++ ) {
        v[ i ] = 3.1416 * r[ i ] * r[ i ] * h[ i ] ;
    }//end for
}//end function
void PrintCylinders( char Name[][15], int r[], int h[], int v[], int N ) {
    int i = 0 ;
    printf( "%-15s %10s %10s %10s \n", "Name", "Radius", "Height", "Volume" ) ;
    printf( "---------------|----------|----------|----------|\n" ) ;
    for( i = 0 ; i < N ; i++ ) {
        printf( "%-15s %10d %10d %10d \n", Name[i], r[i], h[i], v[i] ) ;
    }//end for
}//end function
void FindMaxMinIndex( int v[], int *MinIndex, int *MaxIndex, int N ) {
    int i, Max = v[0], Min = v[0] ;
    for( i = 0 ; i < N ; i++ ) {
        if( v[i] > Max ) {
            Max = v[i] ;
            *MaxIndex = i ;
        }//end if
        
        if( v[i] < Min ) {
            Min = v[i] ;
            *MinIndex = i ;
        }//end if
    }//end for
}//end function

void main( void ) {
    char Name[10][15];
    int radius[10], height[10], volume[10];
    int MinIndex=0, MaxIndex=0, NumberOfCylinders;
    NumberOfCylinders = ReadCylinders(Name, radius, height);
    CylinderVolume(radius, height, volume, NumberOfCylinders);
    PrintCylinders(Name, radius, height, volume, NumberOfCylinders);
    FindMaxMinIndex(volume, &MinIndex, &MaxIndex, NumberOfCylinders);
    WriteStat( Name[MinIndex], volume[MinIndex], Name[MaxIndex], volume[MaxIndex] ) ;
}//end function