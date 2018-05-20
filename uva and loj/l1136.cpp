#include<bits/stdc++.h>
int main()
{
    long long int n,a,b,i,j,sum=0,coun=0,test,c;
    scanf("%d",&test);
    for(c=1;c<=test;c++)
    {
        coun=0;
    scanf("%lld%lld",&a,&b);
    n=b-a;
    n++;
    for(i=1;i<=n;i++)
    {
        sum=0;
        for(j=1;j<=a;j++)
        {
            sum=sum+j;
        }
        if(sum%3==0)
            coun++;
        a++;
    }
    printf("Case %lld: %lld\n",c,coun);
    }
    return 0;
}
