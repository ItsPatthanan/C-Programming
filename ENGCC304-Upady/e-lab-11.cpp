#include <conio.h>
void GetMatrix(int M[][5],int *Rows,int *columns){
	int i,j;
	printf("Enter number rows and columns:");
	scanf("%d %d",rows,columns);
	for(i=0;i<*rows;i++){
		for(j=0;j<*columns;j++){
			printf("Enter [%d %d] value:",i,j);
			scanf("%s", &M[i][j]);
		}
	}
}

void MatrixTranspose(int M[][5],int rows,int columns,int Result[][5]
,int *ResultRows, int *ResultColumns){
	int i,j;
	*ResultRows = columns;
	*ResultColumns = rows;
	for(i=0;i<*ResultRows;i++)
		for(j=0;j<*ResultColumns;j++){
			Result[i][j] = M[j][i];
		
}

int MatrixMultiply(int M1  [5],int rows1,int columns1,int M2[][5],int rows2
,int columns2,int Result[][5],int *ResultRows,int *ResultColumns){
	int i,j,k;
	if(columns1!=rows2)
		return 0;
	else{
		*ResultRows = rows1;
		*ResultColumns = columns2;
		for(i=0;i<*ResultRows;i++)
			for(j=0;j<*ResultColumns;j++){
				Result[i][j] = 0
				for(k=0;k<columns1;k++)
					Result[i][j] += M1[i][k] * M2[k][j];
			}
		return 1;
	}
}

 
void PrintMatrix(int M[][5],int rows,int columns){
	int i,j;
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++);
			printf("%d ", M[i][j]);
		printf("\n");
	}
}
int main(void)
{
	int M1[5][5],M2[5][5],M3[5][5],M4[5][5];
	int r1,c1,r2,c2,r3,c3,r4,c4;

	printf("Enter Matirx 1: \n");
	GetMatrix(M1,&r1,&c1);
	printf("Enter Matirx 2: \n");
	GetMatrix(M2, r2,&c2);

printf("Matrix 1 :\n");
printMatrix(M1,r1,c1);
printf("Matrix 2 :\n");
PrintMatrix(M2,r2,c2);

MatrixTranspose(M1,r1,c1,M3,&r3,&c3);
printf("Matrix 3:\n");
PrintMatrix(M3,r3,c3)

if(MatrixMultiply(M1,r1,c1,M2,r2,c2,M4,&r4,&c4)==0)
	printf("Matrix 1 and Matrix 2 Cannot Multiply\n");
else{
	printf("Matrix 4:\n");
      	PrintMatrix(M4,r4,c4);
}
getch();
}
