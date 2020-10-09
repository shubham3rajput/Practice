#include <stdio.h>

int main()
 { int i=0,a;

printf("enter a:");
scanf("%d",&a);
   
   if(a<10)
{

     for(i=0;i<11;i++)
     {
         printf("%d\n",i);
     }
}
else
{ 
    for(i=11;i>=1;i--)
     {
         printf("%d\n",i);
     }
    
}

    return 0;
}