//WAP to Find Area And Circumference of Circle

#include<stdio.h>;
int main(){


    float r,pi=3.14,area,c;
    
    printf("enter value of r:");
    scanf("%f",&r);
    area=pi*r*r;
    printf("area:%f",area);
    c=2*pi*r;
    printf(" \n circumference:%f",c);
}