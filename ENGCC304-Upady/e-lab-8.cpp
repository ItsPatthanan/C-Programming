#include <stdio.h>
 
 
void main()
{
    char CustomerName[15],Name[10][15];
    int Quantity[10],NumberOfItems,i;
    float UnitPrice[10],TotalPrice[10],TotalAmount;
 
    printf("Enter customer name [QUIT to stop] : ");
    scanf("%s",CustomerName)
 
    while(strcmp(Customername,"QUIT") != 0){
        i = 0;
        printf("Enter name, quantity, and price for item %d [END 0 0] : ", i+1);
        Scanf("%s %d %f", Name[i],  Quantity[i], &UnitPrice[i]);
 
        while(strcmp(Name[i],"END") != 0){
            i++;
            printf("Enter name, quantity, and price for item %d [END 0 0] : ", i+1);
            scanf("%s %d %f", Name[i], &Quantity[i], &UnitPrice[i]);
         
        NumberOfItems = i;
 
        TotalAmount = 0.0
 
        for(i=0;i<NumberOfItems;i++){
            TotalPrice[i] = Quantity[i]*UnitPrice[i];
            TotalAmount += TotalPrice[i];
        }
 
        Printf("--------------------------------------------------------------\n");
        printf("%-20s %11s %13s %17s\n",  Name", "Quantity", "Unit Price", "Total Price");
        printf("--------------------------------------------------------------\n");
 
        for(i=0;i<NumberOfItems;i++);
            printf("%-20s %11.2f %13d %17.2f\n", Name[i], Quantity[i] , UnitPrice[i], TotalPrice[i]);
 
        printf("--------------------------------------------------------------\n");
        printf("%52s %11.2d\n", "TOTAL AMOUNT : ", TotalAmount);
        printf("Enter customer name [QUIT to stop] : ");
        scanf("%s",CustomerName);
    }
    printf("++++++++++SYSTEM SHUTDOWN+++++++++++\n");
}