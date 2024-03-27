//28. Convert years into days and months

#include<stdio.h>
int main(){
	int year,days,months;
	
	printf("Enter years:");
	scanf("%d",&year);
	
	days=year*365;
	months=year*12;
	
	printf("convert days=%d months=%d",days,months);
	
	return 0;
	
}
