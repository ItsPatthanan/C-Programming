#include <stdio.h>
#include <string.h>

struct Student {
	char FirstName[ 50 ] ;
	char LastName[ 50 ] ;
	int  Age ;
	int  Score ;
	int  Section ;
	char Sex ;
} ;

int main() {
	int N = 4 ;
	struct Student GroupA[ N ] ;
	
	for( int i = 0 ; i < N ; i++ ) {
		
		//-------------| Define 
		printf( "Please enter Firstname & Lastname : " ) ;
		scanf( "%s %s", GroupA[ i ].FirstName, GroupA[ i ].LastName ) ;
		printf( "Please enter Age : " ) ;
		scanf( "%d", &GroupA[ i ].Age ) ;
		printf( "Please enter Score : " ) ;
		scanf( "%d", &GroupA[ i ].Score ) ;
		printf( "Please enter Sex : " ) ;
		scanf( " %c", &GroupA[ i ].Sex ) ;
		printf( "Please enter Section : " ) ;
		scanf( "%d", &GroupA[ i ].Section ) ;
		
		//-------------| Display
		printf( "----| Student = %d\n", i ) ;
		printf( "%10s : %10s %10s\n", "Name", GroupA[ i ].FirstName, GroupA[ i ].LastName ) ;
		printf( "%10s : %20d\n", "Age", GroupA[ i ].Age ) ;
		printf( "%10s : %20d\n", "Score", GroupA[ i ].Score ) ;
		printf( "%10s : %20c\n", "Sex", GroupA[ i ].Sex ) ;
		printf( "%10s : %20d\n", "Section", GroupA[ i ].Section ) ;
		printf( "\n" ) ;
	}//end for
	
	return 0 ;
}//end function
