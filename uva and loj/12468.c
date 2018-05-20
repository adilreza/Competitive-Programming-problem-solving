#include<stdio.h>
int main()
{
    int i,s,e,r,n,a,a2;
    while(scanf("%d%d",&s,&e)==2)
    {
        if(e<0||s<0)
            break;
        else
        {
            if(e>s)
                a=e-s;
            else
                a=s-e;
        }
        a2=100-a;
        if(a>a2)
            printf("%d\n",a2);
            else
            printf("%d\n",a);
    }
    return 0;
}
