#include<bits/stdc++.h>
using namespace std;
int adil(int tak)
{
    int sum=0;
    while(tak>0)
    {
        sum=sum+tak%10;
        tak=tak/10;
    }
    if(sum>9)
        return adil(sum);
    else
        return sum;
}
int main()
{
    int i,j,n,l1,l2;
    char a[100],b[100];
    while( gets(a))
    {
        gets(b);
        l1=strlen(a);
        l2=strlen(b);
        n=0;
        for(i=0; i<l1; i++)
        {
             if(a[i]>='a'&&a[i]<='z')
                n=n+a[i]-96;
            else if((a[i]>='A'&&a[i]<='Z'))
                n=n+(a[i]-64);
        }
        int n2=0;
        for(i=0; i<l2; i++)
        {
            if(b[i]>='a'&&b[i]<='z')
                n2=n2+b[i]-96;
            else if(b[i]>='A'&&b[i]<='Z')
                n2=n2+b[i]-64;
        }
        n=adil(n);
        n2=adil(n2);
        double result;
        if(n>=n2)
        {
            result=(double)n2/n;
            result=result*100.0;
        }
        else
        {
            result=(double)n/n2;
            result=result*100.0;
        }
        printf("%.2lf %%\n",result);
    }
    return 0;
}
