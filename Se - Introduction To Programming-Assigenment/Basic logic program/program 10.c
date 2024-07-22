//10. find the area of a rectangular prism formula : A=2(wl+hl+hw)
#include<stdio.h>

main()
{
	float height,width,length,area;
	
	printf("Enter the height of rectangular prism :");// Input the height of the rectangular prism
	scanf("%f",&height);
	printf("Enter the width of rectangular prism  :");// Input the width of the rectangular prism
	scanf("%f",&width);
	printf("Enter the length of rectangular prism  :");// Input the length of the rectangular prism
	scanf("%f",&length);
	
	area = 2*(width*length+height*length+height*width);    // Calculate the  area
	
	printf("The area of a rectangular prism Is :%.2f\n",area); //output
	
	return 0;
	
}

