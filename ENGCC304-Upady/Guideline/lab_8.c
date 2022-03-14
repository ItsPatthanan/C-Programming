#include <stdio.h>
#include <conio.h>
#include <string.h>

void main( void ) {
    char CustomerName[15] ; /* 1 */
    
    //char  Name1[30], Name2[30], Name3[30] ;
    char Name[10][15] ; /* 2 */
    
    //int   Quantity1, Quantity2, Quantity3 ; 
    int Quantity[10] ; /* 3 */
    
    //float UnitPrice1, UnitPrice2, UnitPrice3 ;
    float UnitPrice[10] ; /* 4 */
    
    //float TotalPrice1, TotalPrice2, TotalPrice3 ;
    float TotalPrice[10] ; /* 5 */
    
    int NumberOfItems, i ; /* 6 */
    
    float TotalAmount, Vat ;
    
    printf( "Enter customer name[QUIT to stop]: " ) ;
    scanf( "%s", CustomerName ) ;
    
    while( strcmp( CustomerName, "QUIT" ) != 0 ) {
        i = 0 ;
        /* ----| Input Section |---- */
        printf( "Enter name, quantity, and unit price for item %d : ", i+1 ) ;
        scanf( "%s %d %f", Name[i], &Quantity[i], &UnitPrice[i] ) ;

        while( ______ ) {
           i++ ; // i = i + 1
           printf( "Enter name, quantity, and unit price for item %d : ", i+1 ) ;
           scanf( "%s %d %f", Name[i], &Quantity[i], &UnitPrice[i] ) ;
        }//end while
        
        NumberOfItems = i ;

        /* ----| Processing Section |---- */
        TotalAmount = 0.0 ;
    
        for( ___ ; ___ ; ___ ) {
            TotalPrice[i] = ___ * ___ ;
            TotalAmount += ___ ;
        }//end for
        Vat = TotalAmount * 0.07 ;
    
        /* ----| Output Section |---- */
        printf( "%-20s %10s %10s %10s\n", "Name", "Unit Price", "Quantity", "Total Price" ) ;
        printf( "--------------------|----------|----------|----------|\n" ) ;
        
        for( i = 0 ; ___ ; ___ ) {
            printf( "%-20s %10.2f %10d %9.2f\n", Name__, UnitPrice__, Quantity__, TotalPrice__ ) ;
        }//end for
        
        printf( "--------------------|----------|----------|----------|\n" ) ;
        printf("%41s %10.2f\n", "VAT:", Vat);
        printf("%41s %10.2f\n", "TOTAL AMOUNT:", TotalAmount);
  
        
        printf( "Enter customer name[QUIT to stop]: " ) ;
        scanf( "%s", CustomerName ) ;
    }//end while
    
    printf( "++++++++++ SYSTEM SHUTDOWN ++++++++++" ) ;

    
    getch() ;
    
}//end main function