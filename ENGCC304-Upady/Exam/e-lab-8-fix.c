#include <stdio.h>
#include <string.h> //FIX : ADD string.h here.
 
void main()
{
    char CustomerName[15],Name[10][15];
    int Quantity[10],NumberOfItems,i;
    float UnitPrice[10],TotalPrice[10],TotalAmount;

    printf("Enter customer name [QUIT to stop] : ");
    scanf("%s",CustomerName) ; //FIX : ADD ; lastline.
 
    while(strcmp(CustomerName,"QUIT") != 0){ //FIX : CHANGE 'Customername' to 'CustomerName' 
        i = 0;
        printf("Enter name, quantity, and price for item %d [END 0 0] : ", i+1);
        scanf("%s %d %f", Name[i],  &Quantity[i], &UnitPrice[i]); //FIX : CHANGE 'Scanf' to 'scanf'   <<AND>> ADD & before Quantity
 
        while(strcmp(Name[i],"END") != 0){
            i++;
            printf("Enter name, quantity, and price for item %d [END 0 0] : ", i+1);
            scanf("%s %d %f", Name[i], &Quantity[i], &UnitPrice[i]);
        }//FIX : ADD } here.
        NumberOfItems = i;
 
        TotalAmount = 0.0 ; //FIX : ADD ; here.
 
        for(i=0;i<NumberOfItems;i++){
            TotalPrice[i] = Quantity[i]*UnitPrice[i];
            TotalAmount += TotalPrice[i];
        }
 
        printf("--------------------------------------------------------------\n"); //FIX : CHANGE 'Printf' to 'printf'
        printf("%-20s %11s %13s %17s\n",  "Name", "Quantity", "Unit Price", "Total Price"); //FIX : ADD Double Quote before Name variable.
        printf("--------------------------------------------------------------\n");
 
        for(i=0;i<NumberOfItems;i++) //FIX : DELETE ; before )
            printf("%-20s %11.2f %13d %17.2f\n", Name[i], Quantity[i] , UnitPrice[i], TotalPrice[i]);
 
        printf("--------------------------------------------------------------\n");
        printf("%52s %11.2f\n", "TOTAL AMOUNT : ", TotalAmount);//FIX : CHANGE %11.2d to %11.2f
        printf("Enter customer name [QUIT to stop] : ");
        scanf("%s",CustomerName);
    }
    printf("++++++++++SYSTEM SHUTDOWN+++++++++++\n");
} 