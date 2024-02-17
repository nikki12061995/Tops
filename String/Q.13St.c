//13. Write a program in C to remove characters from a string except alphabets.
#include<stdio.h>
#include<string.h>
int main(){
	char s[20];
	int i;
	
	printf("Enter a sentence :");
	scanf("%[^\n]%*c",s);
	
	for(i=0;s[i]!='\0';++i){
		if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')){
			continue;
		}else{
			s[i]=' ';
		}
	}
	printf("%s",s);
	
	return 0;

	
}
