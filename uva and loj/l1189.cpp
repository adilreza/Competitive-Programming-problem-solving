#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j,sum,flag,b[20],t,cas;

    long long int a[]= {1,1,2,6,24,120,720,5040,40320,362880,3628800,39916800,479001600,6227020800,87178291200,1307674368000,20922789888000,355687428096000,6402373705728000,121645100408832000,2432902008176640000};
    scanf("%lld",&cas);
    for(t=1; t<=cas; t++)
    {
        scanf("%lld",&n);
        for(j=0,i=20; i>=0; i--)
        {
            if(n<a[i])
                continue;
            n=n-a[i];
            b[j++]=i+1;
        }
        sort(b,b+j);
        printf("Case %lld: ",t);
        if(n==0)
        {
            for(i=0; i<j; i++)
            {
                printf("%lld!",b[i]);
                if(i<j-1)
                    printf("+");
            }
            printf("\n");
        }
        else
            printf("impossible\n");
    }
    return 0;
}
