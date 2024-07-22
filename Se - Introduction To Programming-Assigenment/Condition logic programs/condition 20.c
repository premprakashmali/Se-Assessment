#include<stdio.h>
main(){
	int month_number;
	printf("enter the month number ");
	scanf("%d",&month_number);
	
	if(month_number ==1 ){
		printf("month is january and days = 31");
	}
	else if(month_number ==2)
	{
		printf("month is february  and days = 28 or 29");
	}
	else if(month_number ==3)
	{
		printf("month is march  and days = 31");
	}
	else if(month_number ==4)
	{
		printf("month is april and days = 30");
	}
	else if(month_number ==5)
	{
		printf("month is may and days = 31");
	}
	else if(month_number ==6)
	{
		printf("month is june  and days = 30");
	}
	else if(month_number ==7)
	{
		printf("month is july  and days = 31");
	}
	else if(month_number ==8)
	{
		printf("month is august  and days = 31");
	}
	else if(month_number ==9)
	{
		printf("month is september and days = 30");
	}
	else if(month_number ==10)
	{
		printf("month is october  and days = 31");
	}
	else if(month_number ==11)
	{
		printf("month is november  and days = 30");
	}
	else if(month_number ==12)
	{
		printf("month is december  and days = 31");
	}
	
}

