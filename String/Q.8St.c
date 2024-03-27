/*8. Write a program in C to count the total number of vowels or consonants in a 
string.
*/
#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	int i,len,vowel=0,consonants=0;
	
	printf("Enter the string :");
	gets(s);
	
	len=strlen(s);
	for(i=0;i<len;i++){
		//check the character is a vowel (both lowercase and uppercase)
		if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' ){
			vowel++;
		}
		//check the character is an alphabate (both lowercase and uppercase)
		else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')){
			consonants++;  //increment the conso... count if the characater is an alphabate but not vowel
			
		}
	}
	printf("\n total number of vowels is : %d\n",vowel);
	printf("total number of Consonants is : %d\n",consonants);
	
	return 0;
}
