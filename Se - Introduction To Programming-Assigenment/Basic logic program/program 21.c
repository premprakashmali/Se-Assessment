#include<stdio.h>
main(){
	int a,b,temp;
	printf("enter a :");
	scanf("%d",&a);
	
	printf("\nenter b :");
	scanf("%d",&b);
	
	temp=a;
	a=b;
	b=temp;
	printf(" a after swapping %d \n",a);
	
	printf("  b after swapping %d ",b);
printf("\n WITHOUT USING 3RD VARIABLE ");

	printf("enter a ");
	scanf("%d",&a);
	
	printf("\nenter b ");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf(" a after swapping %d \n",a);
	
	printf("  b after swapping %d ",b);

	
		
	
	
}




