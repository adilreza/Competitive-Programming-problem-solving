#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,t;
    cin>>a>>b;
    if(a>=b)
    {
        t=a;
        a=b;
        b=t;
    }
    if(b%a==0)
        printf("Sao Multiplos\n");
    else
        printf("Nao sao Multiplos\n");
    return 0;
}

