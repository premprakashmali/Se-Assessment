//32. Accept 2 numbers and find out its sum check it size

#include<stdio.h>

int main()
{
	int n1,n2,sum;
	
	printf("Enter the number :");//enter the first value
	scanf("%d",&n1);
	
	printf("Enter the number :");//enter the second value
	scanf("%d",&n2);
	
	sum = n1+n2; //Sum of two value
	
	printf("\nNumber of sum is :%d",sum);//output
	
	//check the size of sum
	
	if(sum<100){
		printf("\nSum is a small");
	}
    else if(sum>=100 && sum<=500){
		printf("\nSum is a big");
	}
	else{
		printf("\n Sum is large");
	}
}
