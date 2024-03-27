//14. Write a program in C to combine two strings manually
#include<stdio.h>
#include<string.h>
int main(){
	char str1[50],str2[50];
	int i,j,len1,len2;
	printf("Input the first string :");
	gets(str1);
	printf("Input the second string :");
	gets(str2);
	
	//len1=strlen(str1);
	
	
	for(i=0;str1[i]!='\0';++i);
	for(j=0;str2[j]!='\0';++j,++i)
	{
		str1[i] = str2[j];
	}
	str1[i]='\0';
	printf("\nCombine string: %s",str1);
		
	return 0;
}
