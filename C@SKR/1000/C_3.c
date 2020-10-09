#include<stdio.h>
int main()
{
int a,b,c;

for(a=1;a<=5;a++)
  {
    for(b=1;b<=5;b++)
   {  
       c=a*b;
     printf("%d\t",c);
   }
   printf("\n");
  }

return 0;

}