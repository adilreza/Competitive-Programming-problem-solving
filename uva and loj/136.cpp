#include<bits/stdc++.h>
int a[1550];
int main()
{
    int i,j,n;
    for(i=1;i<=20;i++)
    {
        if(i%2==0&&i%3==0&&i%5==0)
            a[i]=1;
    }
    for(i=0;i<=20;i++)
    {
        if(a[i]==1)
            printf("%d ",i);
    }
}
