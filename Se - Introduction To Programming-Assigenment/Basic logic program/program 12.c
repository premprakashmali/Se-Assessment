//12. Accept number of students from user. I need to give 5 apples to each
//student. How many apples are required?

#include<stdio.h>

main()
{
	int student,appleperstudent=5,totalapple;
	
	printf("Enter the number of student :"); //number of student
	scanf("%d",&student);
	
	totalapple = student*appleperstudent; //totalapple calculate
	
	printf("Total appel are required is :%d",totalapple); //output
	
	return 0;
}



