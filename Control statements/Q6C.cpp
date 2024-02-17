//6. Find the Character Is Vowel or Not
#include<stdio.h>
int main(){
	
	char c;
	printf("Enter any Alphabate:");
	scanf("%c",&c);
	
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
		printf("%c is vowel:\n",c);
	}else{
		printf("%c is not vowel:\n",c);
	}
}
