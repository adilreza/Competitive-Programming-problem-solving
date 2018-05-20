#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int d,i,l,adil=0,t,cas;
    char a[2000000];
    scanf("%lld",&t);
    for(cas=1;cas<=t;cas++)
    {
    adil=0;
    scanf("%s",a);
    scanf("%lld",&d);
    if(d<0)
        d=d*(-1);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]=='-')
            continue;
        adil=(adil*10+a[i]-48)%d;
    }
    if(adil==0)
        printf("Case %lld: divisible\n",cas);
    else
        printf("Case %lld: not divisible\n",cas);
    }
    return 0;
}
