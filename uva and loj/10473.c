#include<stdio.h>
#include<string.h>
int adil(char rn[])
{
    long long int l,ac=0,s;
    for(s=2;rn[s]!='\0';s++)
    {
        ac=ac*10+(rn[s]-48);
    }
    printf("%lld",ac);
    return 0;
}
int main()
{
    long long int i,j,n,decimal,r;
    char a[100],ch[100];
    scanf("%lld",&decimal);
    i=0;
    while(decimal>0)
    {
        r=decimal%16;
        if(r<9)
            a[i++]=r+48;
        else if(r==10)
            a[i++]=65;
        else if(r==11)
            a[i++]=66;
        else if(r==12)
            a[i++]=67;
        else if(r==13)
            a[i++]=68;
        else if(r==14)
            a[i++]=69;
        else if(r==15)
            a[i++]=70;
        decimal=decimal/16;
    }
    a[i]='\0';
    for(j=i-1;j>=0;j--)
        printf("%c",a[j]);
        scanf("%s",ch);
       adil(ch);
    return 0;
}
