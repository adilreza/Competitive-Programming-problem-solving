#include<stdio.h>
int main()
{
    unsigned long i,j,n,max,s,e,k,m,g,st,ed;
    while(scanf("%ld %ld",&s,&e)==2)
    {
        if(s==0&&e==0)
        break;
        max=0;
    m=s;
    g=e;
    if(s>e)
    {
        ed=s;
        st=e;
    }
    else
    {
        st=s;
        ed=e;
    }
    for(j=st; j<=ed; j++)
    {
        i=0;
        n=j;
        while(n!=1)
        {
            if(n%2==0)
            {
                n=n/2;
                i++;
            }
            else
            {
                n=(3*n+1);
                i++;
            }
        }
        if(max<=i)
        {
            max=i;
            k=j-1;
        }
    }
    printf("Between %ld and %ld, %ld generate the longest sequence of %ld values.\n ",m,g,k,max);
    }
    return 0;
}
