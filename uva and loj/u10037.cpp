#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,h,s;
    cin>>n;
    h=n/3600;
    n=n-(h*3600);
    m=n/60;
    s=n%60;
    printf("%lld:%lld:%lld\n",h,m,s);
    return 0;
}

