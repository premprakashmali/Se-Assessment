#include<stdio.h>
main(){
	int a[4];
	int choice,i,j,temp;
	for(int i=0;i<4;i++)
	{
		printf("\n enter the array elements ");
		scanf("%d",&a[i]);
	}
	printf("\n the elements are %d",a[i]);
	printf("\nenter 1 for ascending the array ");
	printf("\nenter 2 for descending the array ");
	printf("\nenter 3 for exit the array ");
	while(true)
	{
		printf("enter the choice ");
		scanf("%d",&choice);
		if(choice ==1 )
		{
		for(i=0;i<4;i++)
		{
			for(j=i+1;j<4;j++)
			{
				if(a[i]>a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
				
			}
			}	
			for(i=0;i<4;i++)
			{
				printf("\n elements are %d ",a[i]);
			}
			
		}
		else if(choice ==2 )
		{
		for(i=0;i<4;i++)
		{
			for(j=i+1;j<4;j++)
			{
				if(a[i]<a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
				
			}
			}	
			for(i=0;i<4;i++)
			{
				printf("\n elements are %d ",a[i]);
			}
			
		}
		else if(choice ==3 )
		{
		printf("exit ");
		break;
		}
		else {
			printf("invalid");
			break;
			
		}
	}
	
}
