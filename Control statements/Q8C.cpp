/*8. WAP to accept the height of a person in centimeters and 
categorize the person according to their height.
*/
#include<stdio.h>
int main(){
	float height;
	printf("enter the height of person in centimeters :");
	scanf("%f",&height);
	
	if(height<150){
		printf("The person is short.\n");
	}else if(height>=150 && height<165){
	    printf("The person is average height.\n");
    }else if(height>=165 && height<=195){
    	printf("The person is tallest.\n");
	}else{
		printf("abnormal height.\n");
	}
	return 0;
	
	
	
}
