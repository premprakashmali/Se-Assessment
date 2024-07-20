#include<stdio.h>

main()
{
	char a[4],b[4],i;
	printf("Enter string :");
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		b[i]=a[i];
	}
	b[i]='\0';
	
	printf("Copy string is :%s",b);
	
}
