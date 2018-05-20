#include<bits/stdc++.h>
int main()
{
    int l1,l2,i,j,flag,temp;
    char a[100],b[100];
    scanf("%s %s",a,b);
    l1=strlen(a);
    l2=strlen(b);
    for(i=0;i<l1;i++)
    {
        if((a[i]-48)==(b[0]-48))
        {
            flag=0;
            temp=i;
            for(j=0;j<l2;j++)
            {
                if(((a[temp]-48)-(b[j]-48))!=0)
                {
                    flag=1;
                }
                temp++;
            }
        }
        if(flag==0)
            break;
    }
    if(flag==0)
        printf("Y");
        else
            printf("NO");
    return 0;
}
