//4. Write a program in C to count the total number of words in a string.
#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	int i,len,count=0;
	
	printf("Enter the string:\n");
	gets(s);
	
	len=strlen(s);
	for(i=0;i<len;i++)
	{
		if(s[i]==' '){
			count++;
		}
	}
	printf("Number of words in a string are: %d\n",count);
	return 0;
}
