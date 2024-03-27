/*2. Write a C program to read the value of an integer m and display the value of 
n is 1 when m is larger than 0, 
0 when m is 0 and 
-1 when m is less than 0
 */
 #include<stdio.h>
 int main(){
 	int n,m;
// 	printf("Enter the value:");
// 	scanf("%d",&n);
 	printf("Enter the value:");
 	scanf("%d",&m);
 	
 	if(m>0){
 		printf("n=1 when m larger than 0:",m);
	 }else if(m==0){
	 	printf("0 when m is 0:");
	 }else if(m<0){
	 	printf("-1 when m is less than 0:");
	 }
	 return 0;
	 
}
	 
	 
 	
 	
 
