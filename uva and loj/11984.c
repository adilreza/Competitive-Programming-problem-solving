#include<stdio.h>
int main()
{
    int n,i,C,C2;
    float F,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&C,&C2);
        F=((9.0/5.0)*C+32+C2);
        a=(5*(F-32)/9);
        printf("Case %d: %.2f\n",i,a);
    }
    return 0;
}
