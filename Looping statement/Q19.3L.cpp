/*19.Pattern
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
#include<stdio.h>
int main(){
	int i,j,rows=5,n=1;
	
	
	for(i=1;i<=rows;i++){
		for(j=1;j<=i;j++){
			printf("%d ",n++);
		}
		printf("\n");
	}
	
	
}
