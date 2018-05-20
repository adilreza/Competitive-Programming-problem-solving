#include<stdio.h>
#include<string.h>
////q=((Ax*By)+(Bx*Cy)+(Cx*Dy)+(Dx*Ay))-((Ay*Bx)+(By*Cx)+(Cy*Dx)+(Dy*Ax));
int main()
{
    char a[200000];
    long long l,m,n,leap=0,sum,i,sum2=0,last,pkp=0;
    int flag=0;
    while(scanf("%s",a)!=EOF)
    {
        if(pkp!=0)
            printf("\n");
        leap=0;
        pkp=1;
        flag=0;
        sum=0;
        sum2=0;
        l=strlen(a);
        l--;
        m=(a[l-3]-'0')*10+(a[l-2]-'0');
        last=(a[l-1]-48)*10+(a[l]-'0');
        if((last%4==0)&&(last%100!=0) )
        {
            printf("This is leap year.\n");
            flag=1;
            leap=1;
        }
        else if(last%100==0&&m%4==0)
        {
            printf("This is leap year.\n");
            flag =1;
            leap=1;
        }
        sum=0;
        for(i=0; i<=l; i++)
        {
            sum=sum+(a[i]-48);
        }
        if(sum%3==0&&(a[l]==48||(a[l]-48)==5))
        {
            printf("This is huluculu festival year.\n");
            flag=1;
        }
        for(i=0; i<=l; i++)
        {
            if((i+1)%2==1)
                sum2=sum2+(a[i]-48);
            else
                sum2=sum2+(a[i]-48)*(-1);
        }
        if((sum2%11==0&&(a[l]==48||(a[l]-48)==5))&&leap==1)
        {
            printf("This is bulukulu festival year.\n");
            flag=1;
        }
        if(flag==0)
            printf("This is an ordinary year.\n");
    }
    return 0;
}

