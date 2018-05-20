#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,a,b;
    char c;
    while(cin>>a>>c>>b)
    {
        if(c=='/')
            cout<<a/b<<endl;
        else if(c=='%')
            cout<<a%b<<endl;
    }
    return 0;
}
