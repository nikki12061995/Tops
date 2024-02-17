/*8. Write a program to find out the max from given number (E.g., No: -1562 
Max number is 6)
*/
#include<stdio.h>
int main(){
	int n,temp=0,rem;    //temporary,reminder
	printf("Enter the number:");
	scanf("%d",&n);
	
	for(int i=1;i<=10;i++){
		rem=n%10;
		if(temp<rem){
			temp=rem;
		}
		n=n/10;
	}
	printf("max number: %d",temp);
	return 0;
}
