//31. Convert kilometers into meters
#include<stdio.h>
int main(){
	int m;
	float km;
	
	printf("Enter kilometers:");
	scanf("%f",&km);
	
	m=km*1000;
	
	printf("METERS:%d",m);
	
	return 0;
}
