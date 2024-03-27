/*19. Write a program in C to calculate and print the electricity bill of a given 
customer. The customer ID, name, and unit consumed by the user should 
be captured from the keyboard to display the total amount to be paid to the 
customer. The charge are as follow :
20. Unit 
21. Charge/unit
22. upto 350 23. @1.20
24. 350 and above but less than 600 25. @1.50
26. 600 and above but less than 800 27. @1.80
28. 800 and above 29. @2.00
30. If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe 
minimum bill should be of Rs. 256/-
*/
#include<stdio.h>
int main(){
	int custId;
	float unit,Amt;
	char custnm;
	
	printf("Input customer ID :");
	scanf("%d",&custId);
	printf("Input consumed Unit :");
	scanf("%f",&unit);
	printf("Input customer Name :");
	scanf(" %c",&custnm);
	
	if(unit<350){
		Amt=unit*1.20;
		printf("%.2f\n",Amt);
		
	}else if(unit>=350 && unit<=600){
		Amt=unit*1.50;
		printf("%.2f\n",Amt);
		
	}else if(unit>=600 && unit<=800){
		Amt=unit*1.80;
		printf("%.2f\n",Amt);
		
	}else{
		Amt=unit*2;
		printf("%.2f\n",Amt);
	}
	if(unit>800){
		Amt=Amt*18/100;
		printf("%.2f",Amt);
	}
	return 0;
	
}
