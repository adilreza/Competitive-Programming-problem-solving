#include<bits/stdc++.h>
#define M 1000003
using namespace std;
int main()
{
    long long int a,b,i,n,d,c,r;
    scanf("%lld",&n);
    for(c=1;c<=n;c++)
    {
    scanf("%lld%lld",&a,&b);
    d=a-b+1;
    r=1;
    for(i=d;i<=a;i++)
    {
        r=((r%M)*(i%M))%M;
        r=((r%M)*((a-i+1)%M))%M;
    }
    printf("Case %lld: %lld\n",c,r);
    }
    return 0;
}
