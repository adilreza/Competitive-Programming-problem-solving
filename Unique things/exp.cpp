#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,b;
    cin>>b>>n;
   long long int result(1);
    while(n)
    {
        if(n&1)
            result=result*b;
        n>>=1;
        b=b*b;
    }
    cout<<result<<endl;
    return 0;
}
