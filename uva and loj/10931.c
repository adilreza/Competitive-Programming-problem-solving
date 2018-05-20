#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long int i,n,d,b,t,j;
    int arr[100];
    while(1)
    {
        scanf("%lld",&n);
        if(n==0)
            break;
        i=0;
        while(n!=0)
        {
            t=n%2;
            n=n/2;
            arr[i]=t;
            i++;
        }
        i=i-1;
        printf("The parity of ");
        d=0;
        for(b=i; b>=0; b--)
        {
            printf("%d",arr[b]);
            if(arr[b]==1)
                d++;
        }
        printf(" is %lld (mod 2).\n",d);
    }
    return 0;
}
