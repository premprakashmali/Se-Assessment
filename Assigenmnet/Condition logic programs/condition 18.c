#include<stdio.h>

main()
{
	int cost,selling,profitloss;
	
	printf("Enter the cost price :");
	scanf("%d",&cost);
	printf("Enter the selling price :");
	scanf("%d",&selling);
	
	profitloss = selling-cost;
	
	if(profitloss>0){
		printf("profit %d",profitloss);
	}
	else if(profitloss<0){
		printf("Loss %d",profitloss);
	}
	else{
		printf("no loss no profit %d",profitloss);
	}
	
}
