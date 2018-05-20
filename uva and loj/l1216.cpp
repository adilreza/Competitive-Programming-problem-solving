#include<bits/stdc++.h>
#define Pi 2*acos(0.0)
int main()
{
    long long int i,j,n;
    double p,r1,r2,r3,h,volum;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lf%lf%lf%lf",&r1,&r3,&h,&p);
        r2=r3+(r1-r3)*(p/h);
        volum=(1/3.0)*Pi*p*(r2*r2+r2*r3+r3*r3);
        printf("Case %lld: %lf\n",i,volum);
    }
    return 0;
}
