#include<stdio.h>
main(){
	
	int a,b,choice;
	printf("enter 1 for Addition \n");
	printf("enter 2 for Subtraction \n");
	printf("enter 3 for Multiplication \n");
	printf("enter 4 for Division \n");
	printf("enter 5 for mod \n");
	

	while(1){
		
	printf("enter choice :");
	scanf("%d",&choice);
	if(choice == 1)
	{
		printf("enter a :");
		scanf("%d",&a);
		
		printf("enter b :");
		scanf("%d",&b);
		
		printf("Addition is %d \n",a+b);
		
		
	}
	else if(choice == 2)
	{
		printf("enter a :");
		scanf("%d",&a);
		
		printf("enter b :");
		scanf("%d",&b);
		
		printf("Subtraction is %d \n",a-b);
		
		
	}
	else if(choice == 3)
	{
		printf("enter a :");
		scanf("%d",&a);
		
		printf("enter b :");
		scanf("%d",&b);
		
		printf("Multiplication is %d \n",a*b);
		
		
	}
	else if(choice == 4)
	{
		printf("enter a :");
		scanf("%d",&a);
		
		printf("enter b :");
		scanf("%d",&b);
		
		printf("Division  is %d \n",a/b);
		
		
	}
	else if(choice == 5)
	{
		printf("enter a :");
		scanf("%d",&a);
		
		printf("enter b :");
		scanf("%d",&b);
		
		printf("modulo is %d \n",a%b);
		
		
	}
	else{
		printf("invalid choice ");
		
	}
	
}
	
}

