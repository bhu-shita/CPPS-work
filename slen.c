#include<stdio.h>
#include<string.h>
main()
{
      char fname[25];
      int x;
      printf("enter the string: ");
      scanf("%s", fname);
      x=strlen(fname);
      printf("string length is %s", fname);
}
