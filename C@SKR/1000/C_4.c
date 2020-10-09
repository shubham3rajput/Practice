#include<stdio.h>
int main ()
{
 int i,j;
 for(i='A';i<='E';i++)
   {
      for(j='A';j<='E';j++)
      {
          printf("%c\t",i);
      }
    printf("\n");
   }
 return 0;
}