#include<stdio.h>
int main()
{
    int i=1,n,m,t;
    scanf("%d%d",&n,&m);
    t=m;
    while(i<=n)
    {
        printf("%d ",n/i);
        i=i*t;
    }
    return 0;
}
