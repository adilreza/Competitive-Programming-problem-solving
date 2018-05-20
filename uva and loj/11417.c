#include<stdio.h>
 int find_gcd(int a1,int b1);
int main()
{
    int i,j,N;
    long long int sum;
    while(scanf("%d",&N)==1,N!=0)
    {
    sum=0;
    for(i=1;i<N;i++)
        for(j=i+1;j<=N;j++)
        {
            sum=sum+find_gcd(i,j);
        }
    printf("%lld\n",sum);
    }
    return 0;
}
int find_gcd(int a1,int b1)
{
    int t;
    while(a1!=0)
    {
        t=b1%a1;
        b1=a1;
        a1=t;
    }
    return b1;
}
