#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,n,r1,c1,r2,c2;
    cin>>n;
    for(i=1;i<=n;i++)
    {
    cin>>r1>>c1>>r2>>c2;
    if(abs(r1-r2)==abs(c1-c2))
        printf("Case %lld: 1\n",i);
    else if(abs(r1-r2)%2==abs(c1-c2)%2)
        printf("Case %lld: 2\n",i);
    else
        printf("Case %lld: impossible\n",i);
    }
    return 0;
}
