//19. Patterns:
//1
//2 3
//4 5 6
//7 8 9 10
//11 12 13 14 15

#include<stdio.h>
main()
{
	int i,j,n=1;
	
	for(i=1;i<=5;i++)//loop in each line
	{
		for(j=1;j<=i;j++)//print number
		{
			printf("%d ",n);
			n++;             //increment in number
		}
		printf("\n");//break line
	}
}
