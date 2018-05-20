#include<stdio.h>
int main()
{
    long long i,j,n,count=0,r,t,d;
    while(scanf("%lld",&n)==1)
    {
        count=0;
    t=n;
    while(1)
    {
        d=n/3;
        r=n%3;
        count=count+d;
        n=d+r;
        if(n==2)
            n++;
        if(n==1)
            break;
    }
    printf("%lld\n",count+t);
    }
    return 0;
}
