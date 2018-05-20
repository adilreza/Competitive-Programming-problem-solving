#include<bits/stdc++.h>
using namespace std;
int solver(long long int n)
{
    long long int i,j,sum=0;
    for(i=2;i*i<=n;i++)
    {
        j=n/i;
        sum=sum+((j+i)*(j+1-i)/2);
        sum=sum+(i*(j-i));
    }
    return sum;
}
int main()
{
    long long int i,j,n;
    cin>>n;
    cout<<solver(n);
    return main();
}
