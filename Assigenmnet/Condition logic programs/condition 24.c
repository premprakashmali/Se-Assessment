#include<stdio.h>
main(){
	int month_number;
	printf("enter the month number ");
	scanf("%d",&month_number);
	
	if(month_number ==1 ){
		printf("days = 31");
	}
	else if(month_number ==2)
	{
		printf(" days = 28 or 29");
	}
	else if(month_number ==3)
	{
		printf(" days = 31");
	}
	else if(month_number ==4)
	{
		printf(" days = 30");
	}
	else if(month_number ==5)
	{
		printf("days = 31");
	}
	else if(month_number ==6)
	{
		printf("days = 30");
	}
	else if(month_number ==7)
	{
		printf("days = 31");
	}
	else if(month_number ==8)
	{
		printf("days = 31");
	}
	else if(month_number ==9)
	{
		printf(" days = 30");
	}
	else if(month_number ==10)
	{
		printf("days = 31");
	}
	else if(month_number ==11)
	{
		printf("days = 30");
	}
	else if(month_number ==12)
	{
		printf(" days = 31");
	}
	else{
		printf("invalid");
	}
	
}

