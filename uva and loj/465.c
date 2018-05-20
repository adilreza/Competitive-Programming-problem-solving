#include<stdio.h>

int main()
{
    long long int i,j,n,s,e,a,r,flag;
    int b[10];
    while(scanf("%lld%lld",&s,&e)==2)
    {
    n=0;
    for(i=s;i<=e;i++)
    {
    flag=0;
    b[0]=0,b[1]=0,b[2]=0,b[3]=0,b[4]=0 ,b[5]=0,b[6]=0,b[7]=0,b[8]=0,b[9]=0;
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
    printf("%lld\n",n);
    }
    return 0;
}
