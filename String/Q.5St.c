/*5. Write a program in C to compare two strings without using string library 
functions
*/
#include<stdio.h>
int main(){
	char str1[10],str2[10];
	int i,temp=0;
	
	printf("Enter the first string: ");
	gets(str1);
	
	printf("Enter the second string: ");
	gets(str2);
	
	for(i=0;str1[i]!='\0';i++)
	{
		if(str1[i]==str2[i]){
			temp=1;
			break;
		}else{
			temp=0;
			break;
		}
	}
	if(temp){
		printf("Both are equal.");
	}else{
		printf("Both are not equal.");
	}
	return 0;
}
