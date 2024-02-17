// 10. find the area of a rectangular prism formula : A=2(wl+hl+hw)

#include<stdio.h>
int main(){
	
	float A,w,l,h;
	
	printf("enter side w:");
	scanf("%f",&w);
	
	printf("enter side l:");
	scanf("%f",&l);

	printf("enter side h:");
	scanf("%f",&h);
	
	A=2*(w*l+h*l+h*w);
	printf("rectangular prism is: %f",A);
	
}
