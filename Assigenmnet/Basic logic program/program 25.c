#include<stdio.h>
main(){
	int expenses,total,average,i;
	for(i=0;i<5;i++)
	{
		printf("enter the expenses \n");
		scanf("%d",&expenses);
		
		total+=expenses;
		
	}
	average  = total/ 5;
    printf("Average Salary: %.2f\n", (float)average);
}

