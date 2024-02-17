/*3. WAP to take 10 no. Input from user find out below values
a. How many Even numbers are there
b. How many odd numbers are there
c. Sum of even numbers
d. Sum of odd numbers
*/
#include<stdio.h>
int main(){
    int i,n,a=0,b=0,x=0,y=0;
	printf("enter the number:");
	scanf("%d",&n);
	
	(i=1);
	while(i<=n)
	{
		if(i%2==0){
//			printf("\n%d is even number:\n",i);
			x++;
			a=a+i;
		}else{
//			printf("\n%d is odd number:\n",i);
			y++;
			b=b+i;
		}
		i++;
		
	}
	printf("\nsum of even number:%d \n total number of even is: %d",a,x);
	printf("\nsum of odd number:%d \n total number of odd is: %d",b,y);	
}

