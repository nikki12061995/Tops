//7. Accept marks from user and check pass or fail
#include<stdio.h>
int main(){
	int i;
	
	printf("Enter marks:");
	scanf("%d",&i);
	
	if(i>=80){
		printf("Distriction");
	}else if(70 <=i && i<80){
		printf("first class");
	}else if(50<=i && i<70){
		printf("second class");
	}else if(35<=i && i<50){
		printf("pass class");
	}else if(0<i && i<35){
		printf("fail");
	}else{
		printf("enter valid marks:");
	}
	return 0;
	
	
	
}
