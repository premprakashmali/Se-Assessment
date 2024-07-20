//7. Accept marks from user and check pass or fail

#include<stdio.h>

int main()
{
	int n;
	
	printf("Enter the marks :");//enter the marks
	scanf("%d",&n);
	
	if(n>36)
	{
		printf("You are pass %d",n);//output pass
	}
	else{
		printf("You are fail %d",n);//output fail
	}
}
