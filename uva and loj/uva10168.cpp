#include<bits/stdc++.h>
using namespace std;
int adil(long long tak)
{
    long long int b=1,j,i;
    j=sqrt(tak);
    for(i=2; i<=j; i++)
    {
        if(tak%i==0)
        {
            b=0;
            break;
        }
    }
    return b;
}
int main()
{
    long long int i,j,n,a3,a4,a1,a2;
    while(scanf("%lld",&n)==1)
    {
        if(n<8)
            printf("Impossible.\n");
        else
        {
            j=n;
            if(j%2==0)
            {
                a1=2;
                a2=2;
                n=n-4;
                for(i=2; i<=n; i++)
                {
                    if(adil(i))
                    {
                        a3=i;
                        if(adil(n-i))
                        {
                            a4=n-i;
                            break;
                        }
                    }
                }
            }
            if(j%2==1)
            {
                a1=2;
                a2=3;
                n=n-5;
                for(i=2; i<=n; i++)
                {
                    if(adil(i))
                    {
                        a3=i;
                        if(adil(n-i))
                        {
                            a4=n-i;
                            break;
                        }
                    }
                }
            }
            printf("%lld %lld %lld %lld\n",a1,a2,a3,a4);
        }
    }
    return 0;
}
