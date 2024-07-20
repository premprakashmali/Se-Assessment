//16. Write a C program to read temperature in centigrade and display a suitable
//message according to the temperature state below:
//Temp < 0 then Freezing weather
//Temp 0-10 then Very Cold weather
//Temp 10-20 then Cold weather
//Temp 20-30 then Normal in Temp
//Temp 30-40 then Its Hot
//Temp >=40 then Its Very Hot
#include<stdio.h>

main()
{
	int n;
	printf("Enter the temprature value :");//enter the temprature value
	scanf("%d",&n);
	
	//check the temprature in diffrent level
	
	if(n<0){
		printf("%d Freezing weather ",n);	
	}
	else if(n>=0 && n<=10){
		printf("%d Very Cold weather ",n);
	}
	else if(n>=10 && n<=20){
		printf("%d Cold weather ",n);
	}
	else if(n>=20 && n<=30){
		printf("%d Normal in Temp ",n);
	}
	
	else if(n>=30 && n<=40){
		printf("%d  Its Hot",n);
	}
	else{
		printf("%d Its Very Hot",n);
	}
}
