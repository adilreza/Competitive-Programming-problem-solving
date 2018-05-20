#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d,s;
    cin>>a>>b>>c>>d;
    s=((a-c)*(a-c))+((b-d)*(b-d));
    s=sqrt(s);
    printf("%0.4lf\n",s);
    return 0;
}

