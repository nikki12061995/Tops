/*10. Write a program you have to make a summation of first and last Digit. (E.g., 
1234 Ans: -5)
*/
#include<stdio.h>
int main(){
	int n,sum=0,firstdigit,lastdigit;
	printf("Enter the number:");
	scanf("%d",&n);
	
	lastdigit=n%10;
	//firstdigit=n;
	
	while(n>10){
		n=n/10;
		}
	firstdigit=n;	
	sum=firstdigit+lastdigit;
	printf("sum of first and last digit:%d",sum);
	return 0;
}
