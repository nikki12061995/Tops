//32. Accept 2 numbers and find out its sum check it size
#include<stdio.h>
int main(){
	float x,y;
	
	printf("Enter the number:");
	scanf("%f",&x);
	printf("Enter the number:");
	scanf("%f",&y);
	
	
	printf("sum size:%d",sizeof(x+y));
	
	return 0;
}
