#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,l1,l2,flag;
    char a[100000],b[100000];
    while(scanf("%s %s",a,b)==2)
    {
    l1=strlen(a);
    l2=strlen(b);
    for(i=0,j=0;i<l2;i++)
    {
        if((a[j]-48)-(b[i]-48)!=0)
            continue;
        else
        {
            j++;
        }
    }
    if(j==l1)
        printf("Yes\n");
    else
        printf("No\n");
    }
    return 0;
}
