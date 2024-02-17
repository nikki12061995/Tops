/*11.WAP to accept 5 numbers from user and display in reverse order using for 
loop and array
*/
#include<stdio.h>
void reverse(int n[5]);

int main(){
	int n[5];
	
	printf("Enter the number:");
	for(int i=0;i<5;i++){
		scanf("%d",&n[i]);
	}
	reverse(n);
	return 0;
}
void reverse(int n[5]){
	int i,a,b;
	for(i=0;i<5;i++){
		b=0;
		while(n[i]!=0){
			a=n[i]%10;
			b=(b*10)+a;
			n[i]=n[i]/10;
		}
		printf(" %d", b);
	}
}
