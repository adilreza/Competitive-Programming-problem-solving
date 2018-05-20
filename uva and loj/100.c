#include<stdio.h>
int main()
{
    unsigned long i,j,n,max,s,e,st ,ed;

    while(scanf("%ld %ld",&s,&e)==2)
    {
        max=0;
        if(s>e)
        {
            ed=s;
            st=e;
        }
        else
        {
            ed=e;
            st=s;
        }
        for(j=st; j<=ed; j++)
        {
            i=1;
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
                max=i;
        }
        printf("%ld %ld %ld\n",s,e,max);
    }

    return 0;
}
