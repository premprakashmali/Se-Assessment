//30. WAP to convert years into days and days into years

#include<stdio.h>

int main()
{
	int y,d;
	
	printf("Enter the years :");//Enter the years
	scanf("%d",&y);
	
	printf("Enter the days :");//Enter the days
	scanf("%d",&d);
	
	printf("\nTotal Days Is:%d",y*365);//output in days
	
	printf("\nTotal Years Is:%.2f",(float)d/365);//output in years
	
	
	return 0;
	
	
}
