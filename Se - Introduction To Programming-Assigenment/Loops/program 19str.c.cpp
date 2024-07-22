//19. patterns.
//*
//*  *
//*  *  *
//*  *  *  *
//*  *  *  *  *
//*  *  *  *  *  *
//*  *  *  *  *
//*  *  *  *
//*  *  *
//*  *
//*

#include<stdio.h>

main()
{
	int i,j,row=6;
	
	 // Up part pattern print 
  for (i = 1; i <= row; i++) {
        for (j = 1; j <= i; j++) {
            printf("*  ");
        }
        printf("\n");
    }
    // Down part pattern print 
	
	  for (i = row - 1; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*  ");
        }
        printf("\n");
    }
	
}
