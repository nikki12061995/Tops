//4. WAP to find factorial using recursion
#include<stdio.h>
int fact(int n);
int main(){
	printf("factorial is :%d",fact(5));
	return 0;
	
}
int fact(int n){
	if(n==1){
		return 1;
	}
	int factNm1=fact(n-1);
	int factN=factNm1*n;
	return factN;
}



