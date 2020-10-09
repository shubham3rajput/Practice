#include<stdio.h>
#define MAX 100

int main(){
int i,n,array[MAX];
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&array[i]);

}
int num;
    int q1,q2,q3,q4;
    int s1,s2,s3,s4;
    int d1,d2,d3,d4;
    
    q1==array[0];
    q2=array[1];
    q3==array[2];
    q4==array[3];
printf("q1 id %d",q1);
printf("q2 is %d",&q2);
    s1==array[4];
    s2==array[5];
    s3==array[6];
    s4==array[7];

 

   
   d1=s1/q1;
   d2=s2/q2;
   d3=s3/q3;
   d4=s4/q4;
    printf("x %d",&d1);

if(d1<d2 && d1<d3 && d1<d4)
{
    printf("%d",d1);
}

else if(d1>d2 && d3>d2 && d2<d4)
{
    printf("%d",d2);
}
if(d3<d1 && d3<d2 && d3<d4)
{
    printf("%d",d3);
}
if(d4<d1 && d4<d2 && d4<d3)
{
    printf("%d",d4);
}

return 0;

}