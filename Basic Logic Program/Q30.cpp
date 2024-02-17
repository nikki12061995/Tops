//30. WAP to convert years into days and days into years
#include<stdio.h>
int main(){
	int years,days;
	 printf("Enter the year:");
	 scanf("%d",&years);
	 
	 days=years*365;
	 years=days/365;
	 
	 
	 printf("\nDAYS:%d",days);
	 printf("\nYEARS:%d",years);
	 
	 return 0;
	
	
}

