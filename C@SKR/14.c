#include<stdio.h>
int main()
{
    int i;
    printf("ENter the number:");
    scanf("%d",&i);

    if(i%2==0)
    {
    printf("Entered number  %d is even",i);
    }
    else
    {
        printf("Entered number is odd");
    }
    
return 0;
}