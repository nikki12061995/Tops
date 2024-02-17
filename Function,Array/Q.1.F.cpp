//1. Write a program to find out the max number from given array using function
#include<stdio.h>
int main(){
	int a[5]={12,24,27,18,9};
	int i,max=0;
	 for(i=0;i<5;i++)
	 {
	   if(a[i]>max)
	   {
	   	max=a[i];
	   }	
	 }
	 printf("max is %d",max);
	 return 0;
}
