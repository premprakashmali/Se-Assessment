#include<stdio.h>

main()
{
	int burgercount=0,chinescount=0,pastacount=0,pizzacount=0;    //Define food count value 
	int burgerprice=80,chinesprice=120,pastaprice=60,pizzaprice=150;//Define Food price 
	int grandtotal=0; //Define grandtotal
	char continuechoice; //Define continuechoice (y/n);
	
	while(1)
	{
		//Dispaly the food Available//
		printf("\n*******welcome to Skyway Resturant*******");
		printf("\n1. Burger Available(price: %d)",burgerprice);
		printf("\n2. Chines Available(price: %d)",chinesprice);    
		printf("\n3. Pasta Available(price: %d)",pastaprice);
		printf("\n4. Pizza Available(price: %d)",pizzaprice);
		printf("\n5. Exit");

 	int choice; //Define food choice variable//
	
	printf("\n\nEnter The food Choice: "); //User select The choice 
	scanf("%d",&choice);
	
	//Check by condition to user which food selected//
	
	if(choice==1)
	{
		burgercount++;
		grandtotal +=burgerprice;
		printf("\nBurger Added In list.Total Burger: %d.Total price:%d\n",burgercount,burgercount*burgerprice);
	}
	else if(choice==2)
	{
		chinescount++;
		grandtotal +=chinesprice;
		printf("\nChines Added In list.Total Chines: %d.Total price:%d\n",chinescount,chinescount*chinesprice);
	}
	else if(choice==3)
	{
		pastacount++;
		grandtotal +=pastaprice;
		printf("\nPasta Added In list.Total Chines: %d.Total price:%d\n",pastacount,pastacount*pastaprice);
	}
	else if(choice==4)
	{
		pizzacount++;
		grandtotal +=pizzaprice;
		printf("\nPizza Added In list.Total Pizza: %d.Total price:%d\n",pizzacount,pizzacount*pizzaprice);
	}
	else if(choice==5)
	{
		printf("Exit...Thank you");
	}
	else{
		printf("Invalid choice !");
	}
	printf("Grand Total price:%d\n",grandtotal); // User selected food grand Total;
	
	printf("Do you select the another item? (y/n):");//if user selected another item type (yes/no)
	scanf("\n%c",&continuechoice);
	
	//if user selected y(yes) then show the All food again;
	//if user selected n(no) then show the food quentity & food price & Grand total;
	
	if(continuechoice =='n'){
		printf("\nBurgers:%d(Total price:%d)\n",burgercount,burgercount*burgerprice);
		printf("\nChines:%d(Total price:%d)\n",chinescount,chinescount*chinesprice);
		printf("\nPasta:%d(Total price:%d)\n",pastacount,pastacount*pastaprice);
		printf("\nPizza:%d(Total price:%d)\n",pizzacount,pizzacount*pizzaprice);
		printf("\nGrand total price: %d\n", grandtotal);
		break;
	}	
  }	
}
