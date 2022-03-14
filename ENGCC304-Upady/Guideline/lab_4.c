#include <stdio.h>
#include <math.h>
#include <conio.h>
void main( void ) {
    float a, b, c, x1, x2, real, imaginary ; //1.
    //clrscr() ; //2.
    printf( "Please enter [a b c] :" ) ; //3.
    scanf( "%f %f %f", &a, &b, &c ) ; //4.
    if( a == 0 ) { //5.
        printf( "x = infinity \n" ) ;
    }//end if
    else {
        if( ( b * b ) - (4*a*c) > 0 ) {
            printf( "YOUR CODE HERE" ) ;
            //ก
            //ข
            //ค
            //ง
        }//end if
        else { //มิเช่นนั้น
            real = ( -1 * b ) / ( 2 * a ) ; //ก
            imaginary = sqrt( abs( (b*b) - (4*a*c) ) ) / ( 2 * a ) ; //ข
            printf( "x1 = (%.3f) + (%.3f)j \n", real, imaginary ) ; //ค
            printf( "x2 = (%.3f) - (%.3f)j \n", real, imaginary ) ; //ง
        }//end else
    }//end else
}//end function