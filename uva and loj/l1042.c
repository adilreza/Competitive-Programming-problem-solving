#include<stdio.h>
#include<math.h>
int adil(long long tak);
int main()
{
    long long int j,n,fast,last,test,count,d2;
    double d;
    scanf("%lld",&test);
    for(count=1; count<=test; count++)
    {
        scanf("%lld",&n);
        d=log(n)/log(2);
        d2=d;
        if(d-d2==0)
            printf("Case %lld: %lld\n",count,n*2);
        else
        {
            fast=adil(n);
            n++;
            for(j=n;; j++)
            {
                last=adil(j);
                if(last==fast)
                {
                    printf("Case %lld: %lld\n",count,j);
                    break;
                }
            }
        }
    }
    return 0;
}
int adil(long long tak)
{
    long long r,i,c=0;
    for(i=0;; i++)
    {
        r=tak%2;
        if(r==1)
            c++;
        tak=tak/2;
        if(tak==0)
            break;
    }
    return c;
}
