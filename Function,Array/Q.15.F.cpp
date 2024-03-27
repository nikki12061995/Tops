//15.Store 5 numbers in array and sort it in ascending order
#include<stdio.h>
void ascending(int arr[5]);
int main(){
	int a[5],i;
	printf("Enter array elements :");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	ascending(a);
}
void ascending(int arr[5]){
	int i,j,temp;
	
	printf("Ascending value is :");
	
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(arr[i] > arr[j]){
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
		printf(" %d ",arr[i]);
	}
}
