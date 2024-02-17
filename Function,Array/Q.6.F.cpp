/*6. WAP to make addition, Subtraction and multiplication of two matrix using 
2-D Array
*/
#include<stdio.h>
void sum(int [2][2],int [2][2]);      //function declaration
void sub(int [2][2],int [2][2]);      //function declaration
void mul(int [2][2],int [2][2]);      //function declaration
int main(){
	int a[2][2],b[2][2],i,j;
	printf("\nEnter first Matrix :");
	for(i=0;i<2;i++)
		for(j=0;j<2;j++)
			scanf("%d",&a[i][j]);
	
	printf("\nEnter second Matrix :");
	for(i=0;i<2;i++)
		for(j=0;j<2;j++)
			scanf("%d",&b[i][j]);
		
	sum(a,b);               //function calling
	sub(a,b);               //function calling
	mul(a,b);               //function calling
	return 0;
	
}
void sum(int a[2][2],int b[2][2])           //function definition
{
	int c[2][2],i,j;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			c[i][j]=a[i][j]+b[i][j];
			printf(" %d ",c[i][j]);
		}
		printf("\n");
	}
}
void sub(int a[2][2],int b[2][2])           //function definition
{
	int c[2][2],i,j;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			c[i][j]=a[i][j]-b[i][j];
			printf(" %d ",c[i][j]);
		}
		printf("\n");
	}
}
void mul(int a[2][2],int b[2][2])           //function definition
{
	int c[2][2],i,j;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			c[i][j]=a[i][j]*b[i][j];
			printf(" %d ",c[i][j]);
		}
		printf("\n");
	}
}









