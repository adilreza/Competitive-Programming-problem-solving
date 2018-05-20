#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,y,m,d;
    cin>>n;
    y=n/365;
    n=n-(y*365);
    m=n/30;
    d=n%30;
    printf("%lld ano(s)\n%lld mes(es)\n%lld dia(s)\n",y,m,d);
    return 0;
}

