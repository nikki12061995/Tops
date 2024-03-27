/*31. Write a program in C to read any Month Number in integer and display the 
number of days for this month.
*/
#include<stdio.h>
int main(){
	int M;
	
	printf("Enter month number:");
	scanf("%d",&M);
	
	if(M == 1 || M ==3 || M == 5 || M == 7 || M == 8 || M == 10 || M == 12 ){
		printf("number of days: 31");
		
	}else if(M == 2){
		printf("number of days: 28/29");
		
	}else if(M == 4 || M == 6 || M == 9 || M == 11){
		printf("number of days: 30");
		
	}else{
		printf("Enter valid momths.\n");
		
	}return 0;
}
