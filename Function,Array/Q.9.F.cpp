//9. WAP to show difference between Structure and Union.
#include<stdio.h>
struct student{
	int rollno;
	float per;
	char grade;
};
//union faculty{
//	int fcno;
//	char fcname[10];
//};
int main(){
	struct student s;
	 printf("Enter rollno :");
	 scanf("%d",&s.rollno);
	 printf("Enter per :");
	 scanf("%f",&s.per);
	 printf("Enter grade :");
	 scanf(" %c",&s.grade);
	 printf("\n");
	 
	 printf("Rollno: %d\n",s.rollno);
	 printf("percantage: %f\n",s.per);
	 printf("Grade: %c",s.grade);
	 
	 return 0;

}


