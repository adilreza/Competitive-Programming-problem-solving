#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,k,t;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        cin>>n>>k;
        printf("Case %lld: %lld\n",i,(n*k)/2);
    }
    return 0;
}
