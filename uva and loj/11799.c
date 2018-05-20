#include<stdio.h>
int main()
{
    int i,j,n,n2,s,m;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&n2);
        m=0;
        for(j=0;j<n2;j++)
        {
            scanf("%d",&s);
            if(s>=m)
                m=s;
        }
        printf("Case %d: %d\n",i,m);
    }
    return 0;
}
