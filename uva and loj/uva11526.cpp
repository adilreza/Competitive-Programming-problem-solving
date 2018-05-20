#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,n,result,t;
    scanf("%lld",&t);
    while(t--)
    {
        result=0;
        scanf("%lld",&n);
        for(i=1;i<=n;i++)
        {
            cout<<i<<"  "<<n/i<<endl;
            //result=result+(n/i);
        }
        //printf("%lld\n",result);
    }
    return 0;
}
