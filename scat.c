#include<stdio.h>
#include<string.h>
main()
{
      char fname[25], lname[25];
      int x;
      printf("enter first name ");
      scanf("%s", fname);
      printf("enter last name ");
      scanf("%s", lname);
      strcat(fname, lname);
      printf("your name is %s %s", fname, lname);
}
