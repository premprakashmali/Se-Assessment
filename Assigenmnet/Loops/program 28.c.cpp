#include<stdio.h>
main(){
	int n,sum,second_sum;
	printf("enter number:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
	sum+=i;
	second_sum+=sum;	
	}
	printf(" sum is %d",second_sum);
}
