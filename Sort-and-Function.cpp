#include <stdio.h>

void PrintArray( int Arr[], int N ) ;

int main() {
	int N = 8 ;
	int a[ N ] = { 17, 14, 12, 18, 20, 18, 20, 19 } ;
	int i = 0 , j = 0 ;
	int hold = 0 ;
	
	PrintArray( a, N ) ;
	
	for( i = 0 ; i < N ; i++ ) {
		for( j = i + 1 ; j < N ; j++ ) {
			if( a[ i ] > a[ j ] ) {
				hold   = a[ i ] ;
				a[ i ] = a[ j ] ;
				a[ j ] = hold ;
			}//end if swap
		}//end for j
	}//end for i
	
	PrintArray( a, N ) ;
	
	return 0 ;
}//end function

void PrintArray( int Arr[], int N ) {
	int i = 0;
	printf( "--| Array : \n" ) ;
	for( i = 0 ; i < N ; i++ ) 
		printf( "%d ", Arr[ i ] ) ;
	printf( "\n" ) ; 
}//end function

