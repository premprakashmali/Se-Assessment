//11. WAP to find number is even or odd using ternary operator

#include<stdio.h>

int main()
{
	int check;
	
	printf("Enter the number :");//enter the number
	scanf("%d",&check);
	
	if(check%2==0){
		printf("Is odd number :%d",check);//output in odd value
	}
	else{
		printf("Is even number :%d",check);//output in even value
	}
}
