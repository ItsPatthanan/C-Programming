//------------------------| INCLUDE
#include <stdio.h>
#include <string.h>
#include <math.h>

//------------------------| STRUCTURE
struct Student {
	char FirstName[ 50 ] ;
	char LastName[ 50 ] ;
	int  Age ;
	int  Score ;
	int  Section ;
	char Sex ;
} ;

struct Human {
	
} ;

//------------------------| PROTOTYPE
void PrintPlease( int loop ) ;
int f( int a, double b, char c, float d ) ;

//------------------------| MAIN
int main() {
	PrintPlease( 1 ) ;
	PrintPlease( 2 ) ;
	PrintPlease( 3 ) ;
	PrintPlease( 4 ) ;
	f( 10, 2.42, 'i', 10.3332 ) ;
	return 0 ;
}//end function

//------------------------| FUNCION
int f( int a, double b, char c, float d ) {
	
	return 0 ;
}//end function

int g() {
	
	return 0 ;
}//end function

double L() {
	
	return 0 ;
}//end function

void PrintPlease( int loop ) {
	int i = 0 ;
	printf( "--| Loop = %d : ", loop ) ;
	for( i = 0 ; i < 10 ; i++ ) {
		printf( "%d ", i ) ;
	}//end for
	printf( "\n" ) ;
}//end function

