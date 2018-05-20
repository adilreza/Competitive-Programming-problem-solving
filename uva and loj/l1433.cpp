#include<bits/stdc++.h>
#define Pi 2*acos(0.0)
using namespace std;
int main()
{
    long long int i,j,n;
    double ax,ay,bx,by,cx,cy,ox,oy,s,oa,oc,ca,theta;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lf %lf %lf %lf %lf %lf",&ox,&oy,&ax,&ay,&bx,&by);
        cx=(ax+bx)/2.0;
        cy=(ay+by)/2.0;
        oa=(((ox-ax)*(ox-ax))+((oy-ay)*(oy-ay)));
        oa=sqrt(oa);
        ca=(((cx-ax)*(cx-ax))+((cy-ay)*(cy-ay)));
        ca=sqrt(ca);
        theta=asin(ca/oa);
        s=oa*theta*2.0;
        printf("Case %lld: %lf\n",i,s);
    }
    return 0;
}
