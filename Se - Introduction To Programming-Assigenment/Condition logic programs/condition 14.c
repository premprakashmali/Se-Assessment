//14. WAP to find the largest of three numbers.

#include<stdio.h>

int main()
{
	int num1,num2,num3;
	
	printf("Enter the number :");
	scanf("%d",&num1);
	
	printf("Enter the number :");
	scanf("%d",&num2);
	
	printf("Enter the number :");
	scanf("%d",&num3);
	
	if(num1>num2 && num1>num3){
		printf("Is largest number :%d",num1);
	}
	else if(num2>num1 && num2>num3)
	{
		printf("Is largest number :%d",num2);
	}
	else{
		printf("Is largest number :%d",num3);
	}
	
	return 0;

}

