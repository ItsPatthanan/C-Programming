#include <stdio.h>
#include <string.h> //FIX : ADD string.h
#include <conio.h>

int GetAllItems(char Name[][15],int Quantity[],float UnitPrice[])
{
	int i=0;
	printf("Enter name, quantity, and price for item %d [END 0 0 to quit]: ", i+1);
	scanf("%s %d %f", Name[i] , &Quantity[i] ,&UnitPrice[i]);
	while(strcmp(Name[i], "END")!=0)
	{
		i++;
		printf("Enter name, quantity, and price for item %d [END 0 0 to quit]: ", i+1);
		scanf("%s %d %f", Name[i] , &Quantity[i] ,&UnitPrice[i]); //FIX : CHANGE '%s %d %d' to '%s %d %f'
	}
	return i;
}

float CalculateTotalPrices(int Quantity[], float UnitPrice[], float TotalPrice[], int NumberOfItems)
{
	int i;
	float TotalAmount = 0.0;

	for(i=0;i<NumberOfItems;i++) { //FIX : ADD { lastline
	
	    TotalPrice[i] = Quantity[i]*UnitPrice[i];
	    TotalAmount += TotalPrice[i];
	}

	return TotalAmount;
}




void PrintProductDetail(char Name[][15], int Quantity[]  , float UnitPrice[], float TotalPrice[], int NumberOfItems) //FIX : ADD '[]' after Quantity
{	int i;
	printf("-----------------------------------------------------------------\n");
	printf("%-20s %11s %13s %17s\n", "Name", "Unit Price",  "Quantity", "Total Price"); //FIX : ADD double quote before 'Quantity'.
	printf("-----------------------------------------------------------------\n");

	for(i=0;i<NumberOfItems;i++) //FIX : DELETE ; here
		printf("%-20s %11.2f %13d %17.2f\n", Name[i], UnitPrice[i], Quantity[i], TotalPrice[i]); //FIX : CHANGE 'totalPrice' to 'TotalPrice'
	printf("-----------------------------------------------------------------\n");
}

void main() //FIX : CHANGE 'int main' to 'void main'
{	
	char CustomerName[15], Name[10][15];
	int Quantity[10], NumberOfItems;
	float UnitPrice[10], TotalPrice[10], TotalAmount;
	printf("Enter customer name [QUIT to stop] : ") ; //FIX : ADD ; lastline.
	scanf("%s", CustomerName);
	while(strcmp(CustomerName, "QUIT")!=0)
	{
		NumberOfItems = GetAllItems(Name, Quantity, UnitPrice);
		TotalAmount = CalculateTotalPrices(Quantity, UnitPrice, TotalPrice, NumberOfItems);

		PrintProductDetail(Name, Quantity, UnitPrice, TotalPrice, NumberOfItems); // FIX : CHANGE 'PrintProductdetail' to 'PrintProductDetail'
		printf("%52s %11.2f\n\n", "TOTAL AMOUNT", TotalAmount);
		printf("Enter customer name [QUIT to stop] : ");
		scanf("%s", CustomerName);
	}
	printf("+++++++SYSTEM SHUTDOWN+++++++\n"); // FIX : CHANGE 'Printf' to 'printf'
	getch();
}
