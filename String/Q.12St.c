/*12. Write a program in C to find the number of times a given word 'is' appears in 
the given string.
*/
#include<stdio.h>
#include<string.h>
int main(){
	char str[50];
	int i,len,times=0;
	
	printf("Enter the string :");
	gets(str);
	
	len=strlen(str);
	
	for(i=0;i<len;i++){
		if((str[i] == 'i' || str[i] == 'I' || str[i+1] == 's' || str[i+1] == 'S' )){
			times++;
		}
	}
	printf("Frequency of the word 'is' is %d\n",times);
	return 0;
}
