//19.patterns.
//A
//B C
//D E F
//G H I J
//K L M N O
#include<stdio.h>

main()
{
	
	int i,j;
	
	char ch = 'A';
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c ",ch);
			ch++;
		}
		
		printf("\n");
	}
	
	return 0;
	
}
