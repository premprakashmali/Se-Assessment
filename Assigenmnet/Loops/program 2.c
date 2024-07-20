//2. WAP to accept 5 numbers from user and display all numbers

#include<stdio.h>

int main()
{
	int i,n[5];
	for(i=0;i<5;i++)
	{
		printf("Enter the number: ");
		scanf("%d",&n[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n%d",n[i]);
	}
	
}


