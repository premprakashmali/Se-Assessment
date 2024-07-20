//10. WAP to check whether a number is negative, positive or zero

#include<stdio.h>

int main()
{
	int n;
	
	printf("Enter the number :");
	scanf("%d",&n);
	
	
	if(n>0){
		printf("%d Is number is positive",n);
	}
	else if(n==0){
		printf("%d is number is Zero",n);
	}
	else{
		printf("%d is number is negative",n);
	}
	
	return 0;
}
