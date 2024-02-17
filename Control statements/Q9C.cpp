/*9. C Program to Check Uppercase or Lowercase or 
Digit or Special Character
*/
#include<stdio.h>
int main(){
	char chr;
	printf("Enter any character:\n");
	scanf("%c",&chr);
	
	if(chr>=65 && chr<=90){
		printf("character is an Uppercase.\n");
	}else if(chr>=97 && chr<=122){
		printf("character is Lowercase.\n");
	}else if(chr>=48 && chr<=57){
		printf("character is the digit.\n");
	}else{
		printf("character is the special digit.\n\n");
	}
	return 0;
	
}
