#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int prime(long long int tak);
int main()
{
    long long int i,j,n,a,b,sum=0,te,u;
    scanf("%lld",&te);
    for(u=1;u<=te;u++)
    {
        sum=0;
        scanf("%lld",&n);
        if(n==0)
            break;
            sum=0;
            j=n/2;
        for(i=2;i<=j;i++)
        {
            if(prime(i))
            {
                if(prime(n-i))
                {
                    sum++;
                }
            }
        }
        printf("Case %lld: %lld\n",u,sum);
    }
    return 0;
}
int prime(long long int tak)
{
    int i,j,b;
    b=1;
    j=sqrt(tak);
    for(i=2;i<=j;i++)
    {
        if(tak%i==0)
        {
            b=0;
            break;
        }
    }
    return b;
}

