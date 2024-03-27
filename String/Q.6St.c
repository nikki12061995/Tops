/*6. Write a program in C to count the total number of alphabets, digits and special 
characters in a string.
*/
#include<stdio.h>
#include<string.h>
int main(){
	char str[50];
	int i,alph=0,digit=0,splch=0;
	
	printf("Enter the string : ");
	gets(str);
	
	for(i=0;str[i];i++){
		if(str[i]>=65 && str[i]<=90){
			alph++;
		}else if(str[i]>=97 && str[i]<=122){
			alph++;
		}else if(str[i]>=48 && str[i]<=57){
			digit++;
		}else{
			splch++;
		} 		
	}
	printf("Alphabets = %d\n",alph);
	printf("Digits = %d\n",digit);
	printf("Special characters = %d",splch);
	
	return 0;
}
