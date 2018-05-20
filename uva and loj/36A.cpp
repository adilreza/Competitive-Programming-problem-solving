#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,sum=0,sum2=0;
    char a[10000];
    cin>>n;
    cin>>a;
    for(i=0;i<n;i++)
    {
        if(a[i]-48==0)
            sum++;
        if(a[i]-48==1)
            sum2++;
    }
    if(sum>=sum2)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
