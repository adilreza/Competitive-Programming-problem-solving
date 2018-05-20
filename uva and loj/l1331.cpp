#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n;
    double a,b,c,r1,r2,r3,A,B,C,s,sector,area;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
    scanf("%lf%lf%lf",&r1,&r2,&r3);
    a=r2+r3;
    b=r1+r3;
    c=r1+r2;
    A=acos((b*b+c*c-a*a)/(2.0*b*c));
    B=acos((a*a+c*c-b*b)/(2.0*a*c));
    C=acos((a*a+b*b-c*c)/(2.0*a*b));
    s=a+b+c;
    s=s/2.0;
    area=s*(s-a)*(s-b)*(s-c);
    area=sqrt(area);
    sector=((C/2.0)*r3*r3)+((B/2.0)*(r2*r2))+((A/2.0)*r1*r1);
    area=area-sector;
    printf("Case %lld: %0.08lf\n",i,area);
    }
    return 0;
}
