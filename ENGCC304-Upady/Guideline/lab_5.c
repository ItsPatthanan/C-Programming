#include <stdio.h>
#include <string.h>
void main( void ) {
    char FoodType[ 10 ] ;
    int  Choice ;
    
    printf( "Welcome to Vending Machine. Enter Sandwich or Beverage : " ) ;
    scanf( "%s", FoodType ) ;

 

    if( strcmp( FoodType , "Sandwich" ) == 0 ) {
        printf( "Enter" ) ;
        printf( "\n ----| 1 : Tuna (30 THB)" ) ;
        printf( "\n ----| 2 : Hamburger (40 THB)" ) ;
        printf( "\n ----| 3 : Ham (35 THB)" ) ;
        printf( "\n : " ) ;
        scanf( "%d", &Choice ) ;
        
        switch( Choice ) {
            case 1 : 
                printf( "Thank you. Please put in 30 THB for your Tuna." ) ;
                break ;
            case 2 :
                printf( "Thank you. Please put in 40 THB for your Hamburger." ) ;
                break ;
            case 3 :
                printf( "Thank you. Please put in 35 THB for your Ham." ) ;
                break ;
            default :
                printf( "Incorrect Input." ) ;
                break ;
        }//end switch
        
    } else if( strcmp( FoodType, "Beverage" ) == 0 ) {
        printf( "Enter" ) ;
        printf( "\n ----| 1 : xxx (xx THB)" ) ;
        printf( "\n ----| 2 : xxx (xx THB)" ) ;
        printf( "\n ----| 3 : xxx (xx THB)" ) ;
        printf( "\n : " ) ;
        scanf( "%d", &Choice ) ;
        
        switch( Choice ) {
            case 1 : 
                
                break ;
            case 2 :
                
                break ;
            case 3 :
                
                break ;
            default :
                
                break ;
        }//end switch
    } else {
        printf( "Incorrect Input" ) ;
    }//end if
    
}//end function