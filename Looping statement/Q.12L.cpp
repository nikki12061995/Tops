//12. Program of Armstrong Number in C Using For Loop & While Loop
#include<stdio.h>
int main(){
	int n,r,r1,a,Arm=0;   //r=reminder number
	printf("Enter any number:");
	scanf("%d",&n);
	
	a=n;
	while(n>0)
	{
		r=n%10;
		Arm++;
		n=n/10;
	}
	
	for(int i=1;i<=Arm;i++){
		r1=n%10;
		
	}
	
	if(i==Arm){
		printf("%d is an Armstrong number.",i);
	}
	else{
		printf("%d is not an Armstrong number.",i);
	}
}
