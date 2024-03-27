//9. Write a program make a summation of given number (E.g., 1523 Ans: -11)
#include<stdio.h>
int main(){
	int n,sum,remi;
	printf("Enter the number:");
	scanf("%d",&n);
	
	for(int i=1;i<=10;i++){
		remi=n%10;
		sum=sum+remi;
		n=n/10;
		
	}
	printf("summation number is:%d",sum);
	return 0;
}
