/*5. WAP to take two Array input from user and sort them in ascending or 
descending order as per user’s choice
*/
#include<stdio.h>
void ascending(int arr[5]);
void descending(int arr[5]);

int main(){
	int arr[5],i,choice;
	printf("Enter array elements:");
	for(i=0;i<5;i++)
	{
		
		scanf("%d",&arr[i]);
	}
	printf("\nselect ascending or descending:");
	scanf("%d",&choice);
	
	if(choice==1){
		ascending(arr);
	}else if(choice==2){
		descending(arr);
	}else{
		printf("\nInvalid");
		return 0;
	}
}
void ascending(int arr1[5]){
	int i,j,temp;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(arr1[j]>arr1[j+1]){
				temp=arr1[j];
				arr1[j]=arr1[j+1];
				arr1[j+1]=temp;
			}
		}
	}
	printf("\nascending array is:");
	for(i=0;i<5;i++){
		printf("%d",arr1[i]);
	}
}
void descending(int arr2[5]){
	int i,j,temp;
	for(i=0;i<4;++i){
		for(j=0;j<4;j++){
			if(arr2[j]>arr2[j+1]){
				temp=arr2[j];
				arr2[j]=arr2[j+1];
				arr2[j+1]=temp;
			}
		}
	}
	printf("\ndescending array is:");
	for(i=0;i<5;i++){
		printf("%d",arr2[i]);
	}
	
}

