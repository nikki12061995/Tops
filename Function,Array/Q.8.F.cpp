//8. WAP to reverse a string and check that the string is palindrome or not 
#include<stdio.h>
#include<string.h>
int main(){
	char str[50];
	int i,length,flag=0;
	
	printf("Enter a string:");
	scanf("%s",str);
	
	//calculate the string length
	length = strlen(str);
	
	for(i=0;i<=length/2;i++){
		if(str[i]!= str[length-i-1]){
			flag=1;
			break;
		}
     }
     if(flag==1){
     	printf("\nnot palindrome");
	 }else{
	 	printf("\npalindrome.");
	 }
}
