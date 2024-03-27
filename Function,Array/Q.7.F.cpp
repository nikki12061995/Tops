//7. WAP Find out length ofstring without using inbuilt function
#include<stdio.h>
int main(){
	//declare variable
	char str[50];
	int i,length=0;
	
	//accepting input.
	printf("Enter a string: \n");
	scanf("%s",str);
	
	//initializing for loop
	for(i=0;str[i]!='\0';i++)
	{
		length++;            //counting length.
	}
	printf("\n length of input string: %d",length);
	
	return 0;
}
