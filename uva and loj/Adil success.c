#include<stdio.h>
int main()
{
    int i,j,n,a,b,orginal,afterP,s,m,m1,terminator=0;
    printf("Enter the Number This & by This:\n");
    scanf("%d%d",&a,&b);
    printf("How long Do U Want to see:\n");
    scanf("%d",&n);
    orginal=a/b;
    afterP=a%b;
    printf("%d",orginal);
    if(afterP<b&&afterP!=0)
    {
        s=afterP;
        printf(".");
        for(i=1;i<=n;i++)
        {
            s=s*10;
            if(s<b)
            {
                printf("0");
                s=s*10;
                i++;
            }
            m=s/b;
            printf("%d",m);
            s=s%b;
        }
    }
    printf("\nThank u");
    return 0;
}

