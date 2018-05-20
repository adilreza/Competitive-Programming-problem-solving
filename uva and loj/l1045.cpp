#include<bits/stdc++.h>
double adil[1000010];
int main()
{
    long  long i,j,n,base,t;
    adil[0]=0;
    for(i=1;i<=1000000;i++)
    {
        adil[i]=log(i)+adil[i-1];
    }
    scanf("%lld",&t);
    for(j=1;j<=t;j++)
    {
    scanf("%lld %lld",&n,&base);
    if(n==0)
        printf("Case %lld: 1\n",j);
    else
    printf("Case %lld: %.0lf\n",j,ceil(adil[n]/log(base+0.0)));
    }
    return 0;
}

