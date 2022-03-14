#include <stdio.h>
#include <conio.h>
void main( void ) {
    char  Name1[30], Name2[30], Name3[30] ;
    int   Quantity1, Quantity2, Quantity3 ;                
    float UnitPrice1, UnitPrice2, UnitPrice3 ;
    float TotalPrice1, TotalPrice2, TotalPrice3 ;
    float TotalAmount, Vat ;
              /* ----| Input Section |---- */
    printf( "Enter name, quantity, and unit price for item 1 : " ) ;
    scanf( "%s %d %f", Name1, &Quantity1, &UnitPrice1 ) ;
    
    printf( "Enter name, quantity, and unit price for item 2 : " ) ;
    scanf( "%s %d %f", Name2, &Quantity2, &UnitPrice2 ) ;
    
    printf( "Enter name, quantity, and unit price for item 3 : " ) ;
    scanf( "%s %d %f", Name3, &Quantity3, &UnitPrice3 ) ;
    
    printf( "\n" ) ;
    
              /* ----| Processing Section |---- */
    TotalPrice1 = Quantity1 * UnitPrice1 ;
    TotalPrice2 = Quantity2 * UnitPrice2 ;
    TotalPrice3 = Quantity3 * UnitPrice3 ;
    TotalAmount = TotalPrice1 + TotalPrice2 + TotalPrice3 ;
    Vat = TotalAmount * 0.07 ;
    
              /* ----| Output Section |---- */
    printf( "%-20s %10s %10s %10s\n", "Name", "Quantity", "Unit Price", "Total Price" ) ;
    printf( "--------------------|----------|----------|----------|\n" ) ;
    printf( "%-20s %10d %10.2f %9.2f\n", Name1, Quantity1, UnitPrice1, TotalPrice1 ) ;
    printf( "%-20s %10d %10.2f %9.2f\n", Name2, Quantity2, UnitPrice2, TotalPrice2 ) ;
    printf( "%-20s %10d %10.2f %9.2f\n", Name3, Quantity3, UnitPrice3, TotalPrice3 ) ;
    printf( "--------------------|----------|----------|----------|\n" ) ;
    printf("%41s %10.2f\n", "VAT:", Vat);
    printf("%41s %10.2f\n", "TOTAL AMOUNT:", TotalAmount);
    
    getch() ;
    
}//end main function