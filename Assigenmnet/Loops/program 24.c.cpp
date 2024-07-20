#include<stdio.h>
main(){
	int n,sum;
	printf("enter number:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
	sum+=i*i;	
	}
	printf(" sum is %d",sum);
}
