/*11. Write a program in C to read a sentence and replace lowercase characters with 
uppercase and vice versa.
*/
#include<stdio.h>
#include<string.h>
int main(){
	char s[50];
	int i,len;
	
	printf("Enter a sentence :");
	gets(s);
	len=strlen(s);
	for(i=0;i<len;i++){
		if(s[i]<=90 && s[i]>=65){
			s[i]=s[i]+32;
		}
		else if(s[i]<=122 && s[i]>=97){
			s[i]=s[i]-32;
		}
		else{
			continue;
		}
	}
	for(i=0;i<len;i++){
		printf("%c",s[i]);
	}
}
