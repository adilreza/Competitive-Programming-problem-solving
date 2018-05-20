#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c;
    cin>>a>>b>>c;
    if(a>=b&&a>=c)
        printf("%lld eh o maior\n",a);
    else if(b>=c&&b>=a)
        printf("%lld eh o maior\n",b);
    else
        printf("%lld eh o maior\n",c);

    return 0;
}

