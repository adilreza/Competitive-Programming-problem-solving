#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,l1,l2,sum,k,r,h;
    char a[1000],b[1000],c[1000];
    scanf("%d",&n);
    while(n--)
    {
        scanf("\n%s\n%s",a,b);
        l1=strlen(a);
        l2=strlen(b);
        sum=0;
        k=0;
        if(l1>=l2)
        {
            for(i=0, j=0; i<l1; i++)
            {
                sum=sum+(a[i]-48);
                if(j>=l2)
                    b[j]='0';
                sum=sum+(b[j]-48);
                r=sum%10;
                if(sum>=10)
                    sum=1;
                else
                    sum=0;
                c[k++]=r+48;
                if(i+1==l1&&sum!=0)
                    c[k++]=sum+48;
                j++;
            }
            c[k]='\0';
            h=0;
            for(i=0; i<k; i++)
            {
                if((c[i]-48)!=0)
                {
                    h++;
                }
                if(h>0)
                    printf("%c",c[i]);
            }
            printf("\n");
        }
        else
        {

            for(i=0, j=0; i<l2; i++)
            {
                sum=sum+(b[i]-48);
                if(j>=l1)
                    a[j]='0';
                sum=sum+(a[j]-48);
                r=sum%10;
                if(sum>=10)
                    sum=1;
                else
                    sum=0;
                c[k++]=r+48;
                if(i+1==l2&&sum!=0)
                    c[k++]=sum+48;
                j++;
            }
            c[k]='\0';
            h=0;
            for(i=0; i<k; i++)
            {
                if((c[i]-48)!=0)
                {
                    h++;
                }
                if(h>0)
                    printf("%c",c[i]);
            }
            printf("\n");
        }
    }
    return 0;
}

