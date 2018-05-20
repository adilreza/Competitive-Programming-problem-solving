#include<bits/stdc++.h>
int main()
{
    char c;
    long long int a[110],flag=0,t,tim,b[110];
    long long int n,m,i,y,z,temp,chang,adil;
    scanf("%lld",&t);
    for(tim=1; tim<=t; tim++)
    {
        flag=1;
        scanf("%lld%lld",&n,&m);
        for(i=0; i<n; i++)
        {
            scanf("%lld",&a[i]);
        }
        for(i=1; i<=m; i++)
        {
            scanf(" %c",&c);
            if(c=='P')
            {
                scanf("%lld%lld",&y,&z);
                temp=a[y];
                a[y]=a[z];
                a[z]=temp;
            }
            else if(c=='R')
            {
                adil=0;
                for(int i=n-1; i>=0; i--)
                {
                    b[adil++]=a[i];
                }
                for(i=0;i<adil;i++)
                {
                    a[i]=b[i];
                }
            }
            else
            {
                scanf("%lld",&chang);
                switch(c)
                {
                case 'S':
                    for(int i=0; i<n; i++)
                    {
                        a[i]=a[i]+chang;
                    }
                    break;
                case 'M':
                    for( int i=0; i<n; i++)
                    {
                        a[i]=a[i]*chang;
                    }
                    break;
                case 'D':
                    for( int i=0; i<n; i++)
                    {
                        a[i]=a[i]/chang;
                    }
                    break;
                }
            }
        }
        if(flag==1)
        {
            printf("Case %lld:\n",tim);
            for(i=0; i<n; i++)
            {
                printf("%lld",a[i]);
                if(i<n-1)
                    printf(" ");
            }
        }
        if(tim!=t)
        printf("\n");
    }
    return 0;
}
