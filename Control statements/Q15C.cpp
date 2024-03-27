/*15. Write a C program to determine eligibility for admission to a professional 
course based on the following criteria
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks 
in Chem>=50 and Total in all three subject >=190 or Total in Maths and 
Physics >=140 --------------------------------------Input the marks obtained in
Physics :65 Input the marks obtained in Chemistry :51 Input the marks 
obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry : 
188 Total marks of Maths and Physics : 137 The candidate is not eligible.
*/
#include<stdio.h>
int main(){
	int math,phy,chem;
	
	printf("input the marks obtained in physics :");
	scanf("%d",&phy);
	printf("input the marks obtained in maths :");
	scanf("%d",&math);
	printf("input the marks obtained in chemistry :");
	scanf("%d",&chem);
	
	if(math>=65 && phy>=55 &&chem>=50 && (math+phy+chem)>=188){
		printf("The candidate is eligible for admission \n");
	}else{
		if(math+phy>=137){
			printf("The candidate is eligible for admission \n");
		}else{
			printf("The candidate is not eligible for admission \n");
		}
	}
		
	
}
