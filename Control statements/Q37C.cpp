/*37. WAP to show
i. Monday to Sunday using switch case
ii. Vowel or Consonant using switch case
*/
#include<stdio.h>
int main(){
	int day;
	char ch;
	printf("Enter week number (1-7):");
	scanf("%d",&day);
	

	
	switch(day){
		case 1:
			printf("Sunday\n");
		break;
		case 2:
			printf("Monday\n");
			break;
		case 3:
			printf("Tuesday\n");		
			break;
		case 4:
			printf("wednesday\n");	
			break;
		case 5:
			printf("Thursday\n");	
			break;
		case 6:
			printf("Friday\n");	
			break;
		case 7:
			printf("Saturday\n");	
			break;	
		default:	
			printf("Invalid Input ! please enter correct Input.\n");
			
	}
	
	printf("\nEnter any alphabet:");
    scanf(" %c",&ch);

    switch(ch){
		case 'a':
			printf("vowel");
		    break;
		case 'e':
			printf("vowel");
			break;
		case 'i':
			printf("vowel");		
			break;
		case 'o':
			printf("vowel");	
			break;
		case 'u':
			printf("vowel");	
			break;
		
		default:	
			printf("Consonant");
			
	}
	return 0;
}
