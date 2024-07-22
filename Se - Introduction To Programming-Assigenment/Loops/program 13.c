//19. Patterns:
//     *
//    * *
//   * * *
//  * * * *
// * * * * *

#include<stdio.h>

 main()
 {
 	int i,j,k;
 	
 	for(i=1;i<=5;i++) //loop for each line
 	{
 		for(j=i;j<5;j++)
 		{
 			printf(" "); //for space
		}
		
		for(k=1;k<=i;k++)
		{
			printf(" *");//printf the star
		}
		
		printf("\n"); //Use for break line
		 	 
	}

 }
 


