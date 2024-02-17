//26. Convert temperature Fahrenheit to Celsius
#include<stdio.h>
int main(){
	float fahr,cel;
	
	printf("Enter fahrenheit:");
	scanf("%f",&fahr);
	
	cel=(fahr-32)*5/9;
	printf("celsius:%f",cel);
	
	return 0;
}
