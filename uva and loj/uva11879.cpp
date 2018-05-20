#include<bits/stdc++.h>
int main()
{
    char a[1000];
    long long int i,j,n,l;
    while(1)
    {
        scanf("%s",a);
        if(strcmp(a,"0")==0)
            break;
    l=strlen(a);
    n=0;
    for(i=0;i<l;i++)
    {
        n=(n*10+(a[i]-48))%17;
    }
    if(n==0)
        printf("1\n");
    else
        printf("0\n");
    }
    return 0;
}
