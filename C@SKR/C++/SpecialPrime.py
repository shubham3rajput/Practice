#include<iostream>
using namespace std;

int sum_of_digits(int a)
{

int ttq,ttr,thq,thr,hq,hr,tq,tr,u,sum;

ttq=a/10000;
ttr=a%10000;

thq=ttr/1000;
thr=ttr%1000;

hq=thr/100;
hr=thr%100;

tq=hr/10;
tr=hr%10;

// ttq=a/10000;
// ttr=a%10000;

sum=ttq+thq+hq+tq+tr;
return sum;
    
} 