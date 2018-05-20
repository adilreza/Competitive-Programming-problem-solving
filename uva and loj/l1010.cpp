#include<bits/stdc++.h>
int main()
{
    long long int i,j,n,m,sum,temp,t;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld %lld",&m,&n);
        sum=0;
        if(n==1)
            sum=m;
        else if(m==1)
            sum=n;
        else if((m==2||n==2)&&(m*n)<8)
        sum=4;
        else if((n==2||m==2)&&(m*n)>=8)
        {
            sum=0;
            j=m*n;
           while(1)
           {
               sum=sum+4;
               j=j-8;
               if(j<=0)
                break;
               if(j==2)
               {
                sum=sum+2;
               break;
               }
           }
        }
        else
        {
            temp=(m*n);
            if(temp%2==1)
                sum=(temp+1)/2;
            else
                sum=temp/2;
        }
        printf("Case %lld: %lld\n",i,sum);
    }
    return 0;
}
