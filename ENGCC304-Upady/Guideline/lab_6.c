#include <stdio.h>  //printf, scanf
#include <stdlib.h> //srand, rand
#include <time.h>   //time
#include <string.h> //strcmp
void main( void ) {
    char Name[ 15 ] ;                     // Command 1
    int WinningNumber, UserGuess, Score ; // Command 2
    int test, i ;                         // Command 3
    srand( time( NULL ) ) ;               // Command 4
    printf( "Please enter your name : " ) ; // Command 5
    scanf( "%s", Name ) ;                 // Command 6
    
    while( strcmp( Name, "QUIT" ) != 0 ) { // Command 7
        printf( "\n Hi, %s", Name ) ;
        
        WinningNumber = rand() % 100 + 1 ; // Command 7.1
        Score = 100 ;                      // Command 7.2
        //YOUR CODE HERE
        //YOUR CODE HERE
        //YOUR CODE HERE
        
        printf( "\nPlease enter your name : " ) ; //Command 7.7
        scanf( "%s", Name ) ;                     //Command 7.8
    }//end while
    
    printf( "\n End Program. Thank you." ) ;
}//end main function