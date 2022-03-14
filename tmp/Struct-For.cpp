//-----| INCLUDE
#include <stdio.h>
#include <string.h>

//-----| STRUCT
struct Student {
	char  Name[ 50 ] ;
	int   Age ;
	char  Sex ;
	float Score ;
} ;

struct Monster {
	char  Name[ 50 ] ;
	int   Age ;
	char  Sex ;
} ;

//-----| PROTOTYPE

//-----| MAIN
int main() {
	int            a ;
	float          b ;
	int 		   N = 10 ;
//	struct Student c1 ;
//	struct Student c2 ;
//	struct Student c3 ;
	struct Student c[ N ] ;
	int i = 0 ;
	float sum = 0 ;
	float avg = 0 ;
	
	for( i = 0 ; i < 4 ; i++ ) {
		printf( "----| Student : %d\n\n", i + 1 ) ;
		
		//----| Define c
//		strcpy( c[ i ].Name, "Kittinan" ) ;
//		c[ i ].Age   = 18 ;
//		c[ i ].Sex   = 'M' ;
//		c[ i ].Score = 79.4 ;
		
		printf( "Enter Name : " )  ;	scanf( "%s", c[ i ].Name ) ;
		printf( "Enter Age : " )   ;	scanf( "%d", &c[ i ].Age ) ;
		printf( "Enter Sec : " )   ;	scanf( " %c", &c[ i ].Sex ) ;
		printf( "Enter Score : " ) ;	scanf( "%f", &c[ i ].Score ) ;
		printf( "\n" ) ;
		
		//----| Show c
		printf( "%10s : %10s\n", "Name", c[ i ].Name ) ;
		printf( "%10s : %10d\n", "Age", c[ i ].Age ) ;
		printf( "%10s : %10c\n", "Sex", c[ i ].Sex ) ;
		printf( "%10s : %10.1f\n", "Score", c[ i ].Score ) ;
		printf( "\n" ) ;
		
		//----| Calculate
		sum += c[ i ].Score ;

	}//end for
	avg = sum / i ;
	printf( "\n----| Average = %.2f", avg ) ;
	
	
//	//----| Define c2
//	strcpy( c2.Name, "ABC" ) ;
//	c2.Age   = 25 ;
//	c2.Sex   = 'F' ;
//	c2.Score = 19.4 ;
//	
//	//----| Show c2 (printf)
//	printf( "%10s : %10s\n", "Name", c2.Name ) ;
//	printf( "%10s : %10d\n", "Age", c2.Age ) ;
//	printf( "%10s : %10c\n", "Sex", c2.Sex ) ;
//	printf( "%10s : %10.1f\n", "Score", c2.Score ) ;
	
	return 0 ;
}//end function

//-----| FUNCTION
