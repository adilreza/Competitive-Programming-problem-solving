#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5],n1,n2,n3,t,i,j;
    for(int i=1;i<=3;i++)
    {
        scanf("%d",&a[i]);
    }
    n1=a[1];
    n2=a[2];
    n3=a[3];
    for(i=1;i<=3;i++)
    {
        for(j=i+1;j<=3;j++)
        {
            if(a[j]<=a[i])
            {
                t=a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }
    }
    for(i=1;i<=3;i++)
        printf("%d\n",a[i]);
    printf("\n");
    cout<<n1<<endl<<n2<<endl<<n3<<endl;
    return 0;
}

