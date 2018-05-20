#include<bits/stdc++.h>
#define Pi 2*acos(0.0)
using namespace std;
int main()
{
    long long int t,c,tr;
    double R,r,i,n,theta;
    scanf("%lld",&t);
    for(c=1;c<=t;c++)
    {
    scanf("%lf %lf",&R,&n);
    theta=360.0/n;
    theta=theta/2.0;
    theta=(Pi/180.0)*theta;
    i=sin(theta);
    r=((R*i)/(i+1.0));
    tr=r;
    if(tr-r==0.0)
        printf("Case %lld: %lld\n",c,tr);
    else
    printf("Case %lld: %0.10lf\n",c,r);
    }
    return 0;
}
