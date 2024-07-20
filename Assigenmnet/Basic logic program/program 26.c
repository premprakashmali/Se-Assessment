//26. Convert temperature Fahrenheit to Celsius

#include<stdio.h>

int main()
{
	float fahrenheit,celsius;
	
	printf("Enter the temperature in Fahrenheit: ");//Enter the temperature in fahrenheit
	scanf("%f",&fahrenheit);
	
	celsius = (fahrenheit-32)*5/9;//convert in celsius
	
	printf("Celsius is a :%.2f celsius\n",celsius);
	
	return 0;
}





