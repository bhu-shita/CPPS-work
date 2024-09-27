#include<stdio.h>
#include<string.h>
main()
{
      char fname[25];
      int x;
      printf("enter the string:");
      scanf("%s", fname);
      printf("enter last name:");
      scanf("%s", lname);
      x = strcmp(fname, lname);
      if(x==1)
      printf("strings are same");
      else
      printf("strings are not same");
}
