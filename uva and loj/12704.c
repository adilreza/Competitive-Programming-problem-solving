#include<stdio.h>
#include<math.h>
int main()
{
    long long i,n,a,a2,rad;
    float av,min,max;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld%lld%lld",&a,&a2,&rad);
        av=sqrt((a*a+a2*a2));
        min=rad-av;
        max=(2*rad)-min;
        printf("%.2f %.2f\n",min,max);
    }
    return 0;
}
