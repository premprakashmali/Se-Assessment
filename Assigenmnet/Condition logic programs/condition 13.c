//13. WAP to find minimum number among 3 numbers using ternary operator
#include<stdio.h>

main()
{
	int a,b,c;
	
	printf("Enter the num :");
	scanf("%d",&a);
	
	printf("Enter the num :");
	scanf("%d",&b);
	
	printf("Enter the num :");	
	scanf("%d",&c);
	
	
	if(a<b && a<c){
		printf("%d is Smallest num",a);
	}
	
    else if(b<a && b<c){
		printf("%d is Smallest num",b);
	}
	
	else{
		printf("%d is smallesst num",c);
	}
}
