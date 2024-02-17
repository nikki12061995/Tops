/*19.pattern
A
B C
D E F
G H I J
K L M N O
*/
#include<stdio.h>
int main(){
	int rows;
	char n='A';
	printf("Enter number of rows:");
	scanf("%d",&rows);
	
	for(int i=1;i<=rows;i++){
		for(int j=1;j<=i;j++){
			printf(" %c",n++);
		}
		printf("\n");
	}
		printf("\n");
	//4.pattern
	
	 for(int i=1;i<=rows;i++){
	 	for(int j=1;j<=i;j++){
	 		printf(" %c",j+64);
		 }
		 printf("\n");
	 }
	printf("\n");
		//5.pattern
		
		for(int i=5;i>=1;i--){
			for(int j=1;j<=i-1;j++){
				printf(" ");
			}
			for(int k=i;k<=9;k++){
				if(k+i==11){
					break;
				}else{
					printf(" *");
				}
			}
			printf("\n");
		}
	printf("\n");
	//6.pattern
	
	for(int i=1;i<=6;i++){
		for(int j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
	for(int i=5;i>=1;i--){
	    for(int j=1;j<=i;j++){
	        printf("* ");
	    }
	    printf("\n");
	}
}
