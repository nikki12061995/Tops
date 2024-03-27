//14.Perform 2D matrix array
#include<stdio.h>
int main(){
	//array declaration
	int a[2][3];
	int i,j;
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("Enter value for a %d,%d :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	//display array elements
	printf("Two dimensional array elements:\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
