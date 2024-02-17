//7. Write a program in C to copy one string to another string.
#include<stdio.h>
#include<string.h>
int main(){
	char str1[10],str2[10];
    printf("Enter the string: ");
    gets(str1);
    printf("\nstring 1 = %s",str1);
    strcpy(str2,str1);
    printf("\nstring 2 = %s",str2);
    return 0;
}


