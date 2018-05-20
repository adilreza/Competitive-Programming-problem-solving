#include<stdio.h>
int main()
{
     long long i,n,sum;
    while(scanf("%lld",&n)!=0,n!=0)
    {
        sum=0;
        for(i=1; i<=n; i++)
        {
            sum=sum+i*i;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
