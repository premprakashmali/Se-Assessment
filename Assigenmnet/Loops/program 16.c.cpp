#include<stdio.h>
main(){
	int i,n,sum=0;
	printf("enter the number till you want to print : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=n;
	}
	printf("\n%d",sum);
	
}
