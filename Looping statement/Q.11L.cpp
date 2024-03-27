//11. Accept 5 names from user at run time.
#include<stdio.h>
int main(){
	int i;
	char ch[5][5];
	
	for(i=0;i<5;i++){
		printf("Enter name:");
		scanf("%s",&ch[i][0]);
	}
	for(i=0;i<5;i++){
		printf("%d %s \n",i,ch[i]);
	}
	return 0;
}
