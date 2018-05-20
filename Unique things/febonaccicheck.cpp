#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,s,t,s2,ss,ss2;
    scanf("%lld",&n);
    ss=(5*n*n)-4;
    ss2=(5*n*n)+4;
    s=sqrt((5*n*n)-4);
    s2=sqrt((5*n*n)+4);
    s=s*s;
    s2=s2*s2;
    if(s==ss)
        cout<<"YES";
    else if(s2==ss2)
        cout<<"YES";
    else
        cout<<"NO";
    return main();

}
