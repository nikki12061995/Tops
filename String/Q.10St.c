//10. Write a program in C to extract a substring from a given string
#include<stdio.h>
#include<string.h>
int main(){
	char str[50],subs[50];
	int i,len,p,c=0;    //p=position,c=counter
	
	printf("Input the string :");
	gets(str);
	
	printf("\nInput the starting position :");
	scanf("%d",&p);
	
	printf("\nInput the length of substring :");
	scanf("%d",&len);
	
	len=strlen(str);
	
	if(c > len){
		printf("\nsubstring greater than actual string");
	}else{
		printf("\nsubstringn is : ");
		for(i=p;i<len+p;i++){
			printf("%c",str[i]);
		}
	}
	return 0;
}
