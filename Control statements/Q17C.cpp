/*17. Write a C program to check whether a triangle can be formed with the given 
values for the angles.
*/
#include<stdio.h>
int main(){
	int A,B,C,Sum;
	
	printf("Input three angles of triangle : \n ");
	scanf("%d %d %d", &A, &B, &C);
	
	Sum = A + B + C;
	if(Sum == 180){
		printf("The triangle is valid.\n");
	}
	else{
		printf("The triangle is not valid.\n");
		
	}
	return 0;
}
