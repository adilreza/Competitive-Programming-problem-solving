#include<stdio.h>
#include<math.h>
int main()
{
    double a,n,p;
    while(scanf("%lf %lf",&n,&p)==2)
    {
        a=pow(p,1/n);
        printf("%.0lf\n",a);
    }
    return 0;
}
