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
	
	struct Student a ;
	struct Student b ;
	struct Student c ;
	
	strcpy( a.FirstName, "Kittinan" ) ;
	strcpy( a.LastName , "Noimanee" ) ;
	a.Age     = 25 ;
	a.Score   = 101 ;
	a.Sex     = 'M' ;
	a.Section = 2 ;
	
	printf( "----| A (data)\n" ) ;
	printf( "%10s : %10s %10s\n", "Name", a.FirstName, a.LastName ) ;
	printf( "%10s : %20d\n", "Age", a.Age ) ;
	printf( "%10s : %20d\n", "Score", a.Score ) ;
	printf( "%10s : %20c\n", "Sex", a.Sex ) ;
	printf( "%10s : %20d\n", "Section", a.Section ) ;
	
	
	strcpy( b.FirstName, "Kittinan" ) ;
	strcpy( b.LastName , "Noimanee" ) ;
	b.Age     = 25 ;
	b.Score   = 101 ;
	b.Sex     = 'M' ;
	b.Section = 2 ;
	
	printf( "----| B (data)\n" ) ;
	printf( "%10s : %10s %10s\n", "Name", b.FirstName, b.LastName ) ;
	printf( "%10s : %20d\n", "Age", b.Age ) ;
	printf( "%10s : %20d\n", "Score", b.Score ) ;
	printf( "%10s : %20c\n", "Sex", b.Sex ) ;
	printf( "%10s : %20d\n", "Section", b.Section ) ;
	
	strcpy( c.FirstName, "Kittinan" ) ;
	strcpy( c.LastName , "Noimanee" ) ;
	c.Age     = 25 ;
	c.Score   = 101 ;
	c.Sex     = 'M' ;
	c.Section = 2 ;
	
	printf( "----| C (data)\n" ) ;
	printf( "%10s : %10s %10s\n", "Name", c.FirstName, c.LastName ) ;
	printf( "%10s : %20d\n", "Age", c.Age ) ;
	printf( "%10s : %20d\n", "Score", c.Score ) ;
	printf( "%10s : %20c\n", "Sex", c.Sex ) ;
	printf( "%10s : %20d\n", "Section", c.Section ) ;
	
	return 0 ;
}//end function
