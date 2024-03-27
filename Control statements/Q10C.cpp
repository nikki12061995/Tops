/*10. WAP to check whether a number is negative, positive or zero.
*/
#include<stdio.h>
int main(){
	int i;
	printf("enter the number:");
	scanf("%d",&i);
	
	if(i>0){
		printf("Enter number is positive.\n");
	}else if(i<0){
		printf("Enter number is negative.\n");
	}else {
	
		printf("You entered value zero.\n");
	}
	return 0;
}
