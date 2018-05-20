#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,p,q,t;
    int a[1000];
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
    scanf("%d %d %d",&n,&p,&q);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    int     sum=0;
    int temp=0;
    for(i=0; i<n; i++)
    {
        temp=temp+a[i];
        if(sum==p||temp>q)
            break;
        sum++;
    }
    printf("Case %d: %d\n",j,sum);
    }
    return 0;
}
