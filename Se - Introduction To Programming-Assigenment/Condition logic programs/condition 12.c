//12. WAP to find maximum number among 3 numbers using ternary operator
#include<stdio.h>

main()
{
	int a,b,c;
	
	printf("Enter the num :");//enter first number
	scanf("%d",&a);
	
	printf("Enter the num :");//enter the second number
	scanf("%d",&b);
	
	printf("Enter the num :");//enter the third number
	scanf("%d",&c);
	
	//check condition among 3 number
	
	if(a>b && a>c){
		printf(" %d is greater then "); 
	}
	
	else if(b>a && b>c){
		printf(" %d is greater then ");
		
	}
	else{
		printf(" %d is greater then ");
	}	
}
