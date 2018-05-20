#include<bits/stdc++.h>
using namespace std;
int adil(long long tak)
{
    long long int b=1,j,i;
    j=sqrt(tak);
    for(i=2; i<=j; i++)
    {
        if(tak%i==0)
        {
            b=0;
            break;
        }
    }
    return b;
}
int main()
{
    int a[1000];
    long long int i,j,n,c,t;
    while(scanf("%lld%lld",&n,&c)==2)
    {
        printf("%lld %lld: ",n,c);
        a[0]=1;
        i=2;
        a[1]=2;
        for(j=3; j<=n; j=j+2)
        {
            if(adil(j))
                a[i++]=j;
        }
        if(n==1)
            cout<<"1";
        else if(c*2>=n)
            for(j=0; j<i; j++)
            {
                cout<<a[j];
                if(j<i-1)
                    printf(" ");
            }
        else if(i%2==0)
        {
            n=i-(c*2);
            n=abs(n);
            n=n/2;
            t=0;
            for(j=n;; j++)
            {
                cout<<a[j];
                t++;
                if(t>=c*2)
                    break;
                else
                    printf(" ");
            }
        }
        else
        {
            n=i-(c*2)-1;
            n=n/2;
            t=1;
            for(j=n+1;; j++)
            {
                cout<<a[j];
                t++;
                if(t>((c*2)-1))
                    break;
                else
                    printf(" ");
            }
        }
        printf("\n\n");
    }
    return 0;
}
