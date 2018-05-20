#include<stdio.h>
#include<string.h>

int converter(long long int temp);
int converted(long long int temp2);
int adil(char rn[],int flag)
{
    long long int l,ac=0,s;
    for(s=flag; rn[s]!='\0'; s++)
    {
        ac=ac*10+(rn[s]-48);
    }
    printf("%lld\n",ac);
    if(flag==2)
        converterd(ac);
    else if(flag==0)
    return ac;
}
int converter(long long int temp)
{
    long long int i,decimal,r,j;
    decimal=temp;
    char a[100];
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
    for(j=i-1; j>=0; j--)
        printf("%c",a[j]);
}
int converted(long long int temp2)
{

}
int main()
{
    long long int adilr,sum=2,t;
    char cca[100];
    scanf("%s",cca);
    if(cca[0]=='0'&&cca[1]=='x')
        {
            sum=2;
            adil(cca,sum);
        }
    else
    {
        sum=0;
        adilr=adil(cca,sum);
    }
    converter(adilr);
    return 0;
}
