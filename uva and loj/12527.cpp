#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,n,s,e,a,r,flag;
    while(scanf("%lld%lld",&s,&e)==2)
    {
    n=0;
    for(i=s;i<=e;i++)
    {
    flag=0;
    int b[10]={0};
    a=i;
    while(a>0)
    {
        r=a%10;
        if(b[r]==0)
        {
            b[r]=1;
        }
        else
        {
            flag=1;
            break;
        }
         a=a/10;
    }
    if(flag==0)
        n++;
    }
    cout<<n<<endl;
    }
    return 0;
}
