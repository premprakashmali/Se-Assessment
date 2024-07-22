//18. Calculate person’s Annual salary

#include<stdio.h>
main()
{
	int monthsalary,annualsalary;
	
	printf("Enter the monthely salary :");
	scanf("%d",&monthsalary);
	
	annualsalary =monthsalary*12;
	
	printf("Annual salary Is :%d",annualsalary);
}
