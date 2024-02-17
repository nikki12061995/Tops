/*8.2.Write a program of structure employee that provides the following
a. information -print and display empno, empname, address
andage
b. Write a program of structure for five employee that 
provides the following information -print and display 
empno, empname, address andage
*/
#include<stdio.h>
struct employee{
	int emp_no,emp_age;
	char emp_name[10],emp_add[50];
};
int main(){
	struct employee e1,e2,e3,e4;
	int i;
	
	for(i=0;i<5;i++){
	
	printf("Enter Employee Number : ");
	scanf("%d",&e1.emp_no);
	
	printf("Enter Employee Name : ");
	scanf("%s",&e2.emp_name);
	
	printf("Enter Employee Age : ");
	scanf("%d",&e3.emp_age);
	
	printf("Enter Employee Address : ");
	scanf("%s",&e4.emp_add);
	}
	
	for(i=0;i<5;i++){
	printf("Employee No is : %d.\n",e1.emp_no);
	printf("Employee Name is : %s.\n",e2.emp_name);
	printf("Employee Age is : %d.\n",e3.emp_age);
	printf("Employee Address is : %s.\n",e4.emp_add);
   
   }
	return 0;
	
}


