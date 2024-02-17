/*13.WAP to accept 5 numbers from user and check entered number is even or odd 
using of array
*/
#include<stdio.h>
int even_odd(int arr[]);

int main(){
	int a[5];
	printf("Enter array elements :\n");
	for(int i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	even_odd(a);
}
int even_odd(int arr[]){
	int i;
	for(i=0;i<5;i++){
		if(arr[i]%2==0){
			printf("\n %d is Even",arr[i]);
		}else{
			printf("\n %d is Odd",arr[i]);
		}
	}
}
