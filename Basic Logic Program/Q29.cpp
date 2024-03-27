//29. Convert minutes into seconds and hours
#include<stdio.h>
int main(){
	int min,sec,hou;
	
	printf("Enter minutes:");
	scanf("%d",&min);
	
	sec=60*min;
	hou=min/60;
	
	printf("\nconvert:%d",sec);
	printf("\nconvert:%d",hou);
	return 0;
}
