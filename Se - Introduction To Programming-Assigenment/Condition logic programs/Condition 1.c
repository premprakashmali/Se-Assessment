//1. Write a C program to accept two integers and check whether they are equal
//or not
#include<stdio.h>

main()
{
	int num1,num2;
	
	printf("Enter the first number :");//enter the first number
	scanf("%d",&num1);
	
	printf("Enter the second number :");//enter the second number
	scanf("%d",&num2);
	
	//check equal or not
	
	if(num1==num2)
	{
		printf("Is equal value");//output is equal
	}
	
	else{
		printf("Is not equal value");//output is not equal
	}
	
	return 0;
}
