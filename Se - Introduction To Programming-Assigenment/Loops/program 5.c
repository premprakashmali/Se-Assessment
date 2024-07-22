//5. WAP to print factorial of given number


#include<stdio.h>
main()
{
	int i,n,fact=1;
	
	
	printf("Enter the number :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact =fact*i;	
	}
	
	printf(" Factorial Number is %d:",fact);
}
