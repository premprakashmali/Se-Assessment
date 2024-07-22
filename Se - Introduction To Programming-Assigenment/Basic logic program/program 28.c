//28. Convert years into days and months
#include<stdio.h>

main()
{
	int y;
	
	printf("Enter years :");//enter years
	scanf("%d",&y);
	
	
	printf("\nTotal days is :%d",y*365);  //output in days
	printf("\nTotal months is :%d",y*12);// output in months
}
