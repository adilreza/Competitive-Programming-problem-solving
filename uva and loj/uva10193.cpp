#include<bits/stdc++.h>
using namespace std;
int adil(long int a,long int b)
{
    if((a>=b)&&(a%b==0))
        return b;
    else
        adil(b,(a%b));
}

int main()
{
    long long int i,j,n,l1,l2,a1,b1,t,c;
    char a[50],b[40];
    scanf("%lld",&n);
    for(c=1;c<=n;c++)
    {
    scanf("%s %s",a,b);
    l1=strlen(a);
    l2=strlen(b);
    a1=0;
    for(i=l1-1,j=0;i>=0;i--)
    {
        t=a[i]-48;
        a1=a1+t*pow(2,j);
        j++;
    }
    b1=0;
     for(i=l2-1,j=0;i>=0;i--)
    {
        t=b[i]-48;
        b1=b1+t*pow(2,j);
        j++;
    }
    t=adil(a1,b1);
    if(t==1)
    {
        printf("Pair #%lld: Love is not all you need!\n",c);
    }
    else
    {
        printf("Pair #%lld: All you need is love!\n",c);
    }
    }
    return 0;
}
