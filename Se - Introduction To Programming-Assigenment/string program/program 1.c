#include<stdio.h>

main()
{
	char a[4],i,len=0;
	printf("Enter the string :");
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		len++;
	}
	
	printf("\n Length of string is :%d",len);
}
