/*36. Write a C program to input electricity unit charges and calculate total
electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit 
For next 100 units Rs. 0.75/unit 
For next 100 units Rs. 1.20/unit 
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill
*/
#include<stdio.h>
int main(){
	int unit;
	float amt,total_amt,Sc;
	
	printf("Enter total unit consumed:");
	scanf("%d",&unit);
	
	if(unit<=50){
		amt = unit * 0.50;
		
	}else if(unit<=150){
		amt = 25 + (unit-50)*0.75;
		
	}else if(unit<=250){
		amt = 100 + (unit-150) * 1.20;
		
	}else{
		amt=220 + (unit-250) * 1.50;
		
	}
	
	Sc = amt * 0.20;
	total_amt = amt + Sc;
	
	printf("\nElectricity Bill = %.2f",total_amt);
	
	return 0;
}