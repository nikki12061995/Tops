//27. Convert days into months
#include<stdio.h>
int main(){
	int day,mon;
	
	printf("enter days:");
	scanf("%d",&day);
	
	mon=day/30;
	
	
	printf("convert months=%d ",mon);
	
	return 0;
}
