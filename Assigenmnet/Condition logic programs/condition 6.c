//6. Find the Character Is Vowel or Not

#include<stdio.h>

int main()
{
	char c;
	printf("Enter the vowel :");
	scanf("%c",&c);
	
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
	{
		printf("Is vowel :%c",c);
	}
	else{
		printf("Is not a vowel %c",c);
	}
	
}
