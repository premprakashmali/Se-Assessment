//15. Convert school’s name in abbreviated form

#include<stdio.h>

int main() {
  char fname[20], lname[20];
  
  printf("Enter The First Name, Middle Name and Last Name \n"); //input enter
  scanf("%s %s", fname, lname);
  printf("Abbreviated Name: "); //Abbreviated Name
  printf("%c.%s\n", fname[0] ,lname);
  return 0;
}
