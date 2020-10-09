#include<stdio.h>
int main()
{
    int i;
    printf("Enter the given number:");
    scanf("%d",i);
    if(i==1)
    {
        printf("The given number %d is neither even nor odd",i); 
    }
    if(i%2==0)
    {
        printf("The given number %d is even",i); 
    }
    else
    {
    printf("The given number %d is odd",i);
    }
    return 0;
    
}
