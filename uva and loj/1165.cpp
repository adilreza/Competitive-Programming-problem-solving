#include<bits/stdc++.h>
int main()
{
    long long int i,j,n,t,s;
    scanf("%lld",&s);
    while(s--)
    {
    scanf("%lld",&n);
    j=1;
    t=sqrt(n);
    for(i=2;i<=t;i++)
    {
        if(n%i==0)
            j=0;
    }
    if(j)
        printf("Prime\n",n);
    else
        printf("Not Prime\n",n);
    }
    return 0;
}
