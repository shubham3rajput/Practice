#include<stdio.h>
#include<string.h>

int main()
{

char *fruits[]={"2 ORANGES","2 APPLES","3 BANANAS","1 PINEAPPLE"};

// printf("String is %s",fruits[1]);
if(strcmp(fruits[1],fruits[2])<0)
{
    printf("%s is smaller than %s",fruits[1],fruits[2]);

}

else if(strcmp(fruits[1],fruits[2]) <0)
{
    printf("%s is greater than %s",fruits[1],fruits[2]);

}




return 0;
}