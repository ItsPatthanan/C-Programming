#include <stdio.h>

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
		scanf("%s %d %d", Name[i] , &Quantity[i] ,&UnitPrice[i]);
	}
	return i;
}

float CalculateTotalPrices(int Quantity[], float UnitPrice[], float TotalPrice[], int NumberOfItems)
{
	int i;
	float TotalAmount = 0.0;

	for(i=0;i<NumberOfItems;i++)
	
	    TotalPrice[i] = Quantity[i]*UnitPrice[i];
	    TotalAmount += TotalPrice[i];
	}

	return TotalAmount;
}




void PrintProductDetail(char Name[][15], int Quantity  , float UnitPrice[], float TotalPrice[], int NumberOfItems)
{	int i;
	printf("-----------------------------------------------------------------\n");
	printf("%-20s %11s %13s %17s\n", "Name", "Unit Price",  Quantity", "Total Price");
	printf("-----------------------------------------------------------------\n");

	for(i=0;i<NumberOfItems;i++);
		printf("%-20s %11.2f %13d %17.2f\n", Name[i], UnitPrice[i], Quantity[i], totalPrice[i]);
	printf("-----------------------------------------------------------------\n");
}

int main()
{	
	char CustomerName[15], Name[10][15];
	int Quantity[10], NumberOfItems;
	float UnitPrice[10], TotalPrice[10], TotalAmount;
	printf("Enter customer name [QUIT to stop] : ")
	scanf("%s", CustomerName);
	while(strcmp(CustomerName, "QUIT")!=0)
	{
		NumberOfItems = GetAllItems(Name, Quantity, UnitPrice);
		TotalAmount = CalculateTotalPrices(Quantity, UnitPrice, TotalPrice, NumberOfItems);

		PrintProductdetail(Name, Quantity, UnitPrice, TotalPrice, NumberOfItems);
		printf("%52s %11.2f\n\n", "TOTAL AMOUNT", TotalAmount);
		printf("Enter customer name [QUIT to stop] : ");
		scanf("%s", CustomerName);
	}
	Printf("+++++++SYSTEM SHUTDOWN+++++++\n");
	getch();
}
