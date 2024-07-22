//9. Find circumference of Triangle formula : triangle = a + b + c

#include<stdio.h>

main()
{
	float a1,b1,c1,circumference;
	
	printf("Enter the length of a1 of the triangle:");  // Input the lengths of the a1 of the triangle
	scanf("%f",&a1);
	printf("Enter the length of b1 of the triangle:");// Input the lengths of the b1 of the triangle
	scanf("%f",&b1);
	printf("Enter the length of c1 of the triangle:");// Input the lengths of the c1 of the triangle
	scanf("%f",&c1);
	
	circumference = a1+b1+c1;     // Calculate the circumference
	
	printf("circumference of the triangle is: %.2f\n",circumference); //output
	
	return 0;
	
}
