#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,s;
    cin>>a>>b>>c;
    s=b*c;
    cin>>a>>b>>c;
    s=s+b*c;
    printf("VALOR A PAGAR: R$ %0.2lf\n",s);
    return 0;
}

