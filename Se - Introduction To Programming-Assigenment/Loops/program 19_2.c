//19. Patterns:
//A
//A B
//A B C
//A B C D
//A B C D E

#include<stdio.h>

main(){
	
	int i,j;
	char ch;
	
	for(i=0;i<5;i++) //loop for each line
	{
		ch='A';
		for(j=0;j<=i;j++)
		{
			printf("%c ",ch); //print Pattern
			ch++;
		}
		printf("\n"); //Break line
	}
}
