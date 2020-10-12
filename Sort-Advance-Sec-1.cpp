#include <stdio.h>
#include <string.h>

struct Student {
	char  Name[ 50 ]	;
	float Score ;
	int   Age ;
} ;

void Sort( struct Student S[ 10 ], int N, int mode ) ;
int FindMaxScore( struct Student Kon[ 10 ], int N ) ;
int FindMinScore( struct Student Kon[ 10 ], int N ) ;

struct Student DefineStudent( char N[ 50 ], int A, float S ) ;
void ShowStudent( struct Student S ) ;
void ShowAll( struct Student S[ 10 ], int N ) ;
	
int main() {
	int N 					= 10 ;
	struct Student s[ N ] ;
	int i    				= 0 ;
	int j    				= 0 ;
	int MaxI 				= -1 ;
	int MinI 				= -1 ;
	
	s[ 0 ] = DefineStudent( "Tum", 		19, 59.16 ) ;
	s[ 1 ] = DefineStudent( "Toi", 		20, 89.17 ) ;
	s[ 2 ] = DefineStudent( "Too", 		21, 63.43 ) ;
	s[ 3 ] = DefineStudent( "Tai", 		20, 24.16 ) ;
	s[ 4 ] = DefineStudent( "Toy", 		19, 72.00 ) ;
	s[ 5 ] = DefineStudent( "Tee", 		18, 64.01 ) ;
	s[ 6 ] = DefineStudent( "Tom", 		19, 65.13 ) ;
	s[ 7 ] = DefineStudent( "Tony", 	19, 63.46 ) ;
	s[ 8 ] = DefineStudent( "Tumbon", 	17, 45.19 ) ;
	s[ 9 ] = DefineStudent( "Tim", 		19, 28.18 ) ;
	
	//for( i = 0 ; i < 10 ; i++ ) ShowStudent( s[ i ] ) ;
	
	MaxI = FindMaxScore( s, 10 ) ;		ShowStudent( s[ MaxI ] ) ;
	MinI = FindMinScore( s, 10 ) ;		ShowStudent( s[ MinI ] ) ;
	
	ShowAll( s, 10 ) ;
	
	//-------| Sort
	Sort( s, 10, 1 ) ;
	ShowAll( s, 10 ) ;
	
	Sort( s, 10, 2 ) ;
	ShowAll( s, 10 ) ;
	
	return 0 ;
}//end function

void Sort( struct Student S[ 10 ], int N, int mode ) {
	int i = 0 ;
	int j = 0 ;
	struct Student Hold ;
	for( i = 0 ; i < N ; i++ ) {
		for( j = i + 1 ; j < N ; j++ ) {
			if( mode == 1 ) {
				if( S[ i ].Score > S[ j ].Score ) {
					Hold   = S[ i ] ;
					S[ i ] = S[ j ] ;
					S[ j ] = Hold ;
				}//end if
			} else if( mode == 2 ) {
				if( S[ i ].Score < S[ j ].Score ) {
					Hold   = S[ i ] ;
					S[ i ] = S[ j ] ;
					S[ j ] = Hold ;
				}//end if
			}//end if
		}//end for
	}//end for
}//end function

int FindMaxScore( struct Student Kon[ 10 ], int N ) {
	int i 	   = 0 ;
	float max  = -999999 ;
	int   maxI = -1 ;
	for( i = 0 ; i < N ; i++ ) {
		if( Kon[ i ].Score > max ) {
			max = Kon[ i ].Score ;
			maxI = i ;
		}//end if
	}//end for
	return maxI ;
}//end function

int FindMinScore( struct Student Kon[ 10 ], int N ) {
	int i 	   = 0 ;
	float min  = 999999 ;
	int   minI = -1 ;
	for( i = 0 ; i < N ; i++ ) {
		if( Kon[ i ].Score < min ) {
			min = Kon[ i ].Score ;
			minI = i ;
		}//end if
	}//end for
	return minI ;
}//end function

void ShowAll( struct Student S[ 10 ], int N ) {
	int i = 0 ;
	printf( "\n----| Show Series : \n" ) ;
	for( i = 0 ; i < N ; i++ ) printf( "%10s ", S[ i ].Name ) ;
	printf( "\n" ) ;
	for( i = 0 ; i < N ; i++ ) printf( "%10.2f ", S[ i ].Score ) ;
	printf( "\n" ) ;
}//end function

struct Student DefineStudent( char N[ 50 ], int A, float S ) {
	struct Student Output ;
	strcpy( Output.Name, N ) ;
	Output.Age 		= A ;
	Output.Score 	= S ;
	return Output ;
}//end function

void ShowStudent( struct Student S ) {
	printf( "\n\n-----| Student : \n" ) ;
	printf( "%10s : %10s\n", "Name", S.Name ) ;
	printf( "%10s : %10d\n", "Age", S.Age ) ;
	printf( "%10s : %10.2f\n", "Score", S.Score ) ;
}//end function
