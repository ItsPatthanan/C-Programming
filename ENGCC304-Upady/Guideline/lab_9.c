#include <stdio.h>
#include <math.h>
void main( void ) {
    int Matrix1[5][5], Matrix2[5][5], Matrix3[5][5], Matrix4[5][5] ;
    int rows1, cols1, rows2, cols2, rows3, cols3, rows4, cols4 ;
    int i, j, k ;
    
    //-------| Input Matrix1
    printf( "Enter Matrix 1: \n" ) ;
    printf( "Enter number rows and columns : " ) ;
    scanf( "%d %d", &rows1, &cols1 ) ;
    for( i = 0 ; i < rows1 ; i++ ) {
        for( j = 0 ; j < cols1 ; j++ ) {
            printf( "Enter [%d, %d] value: ", i, j ) ;
            scanf( "%d", &Matrix1[ i ][ j ] ) ;
        }//end for j
    }//end for i
    
    //-------| Input Matrix2
    printf( "Enter Matrix 2: \n" ) ;
    printf( "Enter number rows and columns : " ) ;
    scanf( "%d %d", &rows2, &cols2 ) ;
    for( i = 0 ; i < rows2 ; i++ ) {
        for( j = 0 ; j < cols2 ; j++ ) {
            printf( "Enter [%d, %d] value: ", i, j ) ;
            scanf( "%d", &Matrix2[ i ][ j ] ) ;
        }//end for j
    }//end for i
    
    //-------| Processing Matrix 3
    rows3 = cols1 ;
    cols3 = rows1 ;
    for( i = 0 ; i < rows3 ; i++ ) {
        for( j = 0 ; j < cols3 ; j++ ) {
            Matrix3[i][j] = Matrix1[j][i] ;
        }//end for j
    }//end for i
    
    
    //--------| SHOW Matrix 1, 2, 3
    printf( "\nMatrix 1 : \n" ) ;
    for( i = 0 ; i < rows1 ; i++ ) {
        for( j = 0 ; j < cols1 ; j++ ) {
            printf( "%d ", Matrix1[ i ][ j ] ) ;
        }//end for j
        printf( "\n" ) ;
    }//end for i
    
    printf( "\nMatrix 2 : \n" ) ;
    for( i = 0 ; i < rows2 ; i++ ) {
        for( j = 0 ; j < cols2 ; j++ ) {
            printf( "%d ", Matrix2[ i ][ j ] ) ;
        }//end for j
        printf( "\n" ) ;
    }//end for i
    
    printf( "\nMatrix 3 : \n" ) ;
    for( i = 0 ; i < rows3 ; i++ ) {
        for( j = 0 ; j < cols3 ; j++ ) {
            printf( "%d ", Matrix3[ i ][ j ] ) ;
        }//end for j
        printf( "\n" ) ;
    }//end for i
    
    
    //------| PROCESSING Matrix4
    if( cols1 != rows2 ) {
        printf( "\n*** Matrix1 and Matrix2 CANNOT multiply ***\n" ) ;
    } else {
        
        rows4 = ___ ;
        cols4 = ___ ;
        
        for( i = 0 ; i < __ ; i++ ) {
            for( j = 0 ; j < __ ; j++ ) {
                
                Matrix4[ i ][ j ] = 0 ;
                
                for( k = 0 ; k < cols1 ; k++ ) {
                    Matrix4[ i ][ j ] += _____ ;
                }//end for k
            }//end for j
        }//end for i
        
        //--------| SHOW Matrix 4
        printf( "\nMatrix 4 : \n" ) ;
        for( i = 0 ; i < rows4 ; i++ ) {
            for( j = 0 ; j < cols4 ; j++ ) {
                printf( "%d ", Matrix4[ i ][ j ] ) ;
            }//end for j
            printf( "\n" ) ;
        }//end for i
        
    }//end if
    
}//end function