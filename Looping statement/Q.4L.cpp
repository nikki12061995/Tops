//4. WAP to print table up to given numbers
#include<stdio.h>
int main(){
	int i,j;
	for(i=4;i<=6;i++){
		
		for(j=1;j<=10;j++){
		
			printf("%d * %d = %d\n",i,j,i*j);
	
		}
		printf("\n");
		
	}
	return 0;
}
