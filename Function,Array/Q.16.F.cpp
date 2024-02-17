//16.Accept 5 numbers from user and perform sum of array
#include<stdio.h>
void sum(int arr[]);
int main(){
	int i,arr[5];
	for(i=0;i<5;i++){
		printf("Enter the number:",i);
		scanf("%d",&arr[i]);
	}
	sum(arr);
	
	return 0;
}
void sum(int arr[]){
	int i,sum=0;
	for(i=0;i<5;i++){
		sum=sum+arr[i];
	}
	printf("\nThe sum of the given 5 numbers is : %d\n",sum);
	
}
