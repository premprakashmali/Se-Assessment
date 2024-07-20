#include<stdio.h>
#define MAX 5
main(){
	int a[MAX];
	for(int i=1;i<=	MAX;i++)
	{
		printf("enter the elements :");
		scanf("%d",&a[i]);
	}
	for(int i=MAX;i>=1;i--)
	{
		printf("array  %d ",a[i]);
	}
}

