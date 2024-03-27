//12.WAP to accept 5 students name and store it in array
#include<stdio.h>
int main(){
	char name[5][10];
	int i;
	
	 for(i=0;i<5;i++){
	 	printf("Enter name %d:",i+1);
	 	gets(name[i]);
	 	
		}
	 printf("\nentered students names :");
	 for(i=0;i<5;i++)
	 {
	 	printf("\n%s",name[i]);
	 }
	 
}
