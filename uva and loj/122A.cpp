#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,temp;
    temp=n;
    cin>>n;
    if(n%4==0||n%47==0||n%477==0||n%7==0||n%74==0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
