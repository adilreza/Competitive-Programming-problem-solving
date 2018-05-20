#include<stdio.h>
#include<math.h>
int main()
{
    double n,a,sum,i;

    while (scanf("%lf %lf",&n,&a)==2)
    {
    sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+i*pow(a,i);
    }
    printf("%.0lf\n",sum);
    }
    return 0;
}
