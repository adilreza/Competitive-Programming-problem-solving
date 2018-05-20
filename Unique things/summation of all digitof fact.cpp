#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,sum,base;
    double s;
    printf("Enter facnumber:\n");
    cin>>n;
    s=0.0;
    for(i=1;i<=n;i++)
    {
        s=s+log(i)/(log(10));
    }
    sum=s;
    sum+=1;
    cout<<sum<<endl;
    return main();
}
