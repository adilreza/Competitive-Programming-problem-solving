#include<stdio.h>
#include<string.h>
int main()
{
    int i,adil,j,n,l,m,test=0;
    int start=0;
    char a[10000];
    while(gets(a))
    {
        l=strlen(a);
        start=-1;
        for(i=0; i<l; i++)
        {
            if(a[i]==' ')
            {
                for(j=i-1; j>start; j--)
                {
                    printf("%c",a[j]);
                }
                printf(" ");
                start=i;
            }
        }
        for(adil=l-1; adil>start; adil--)//ses theke prothom deke giya thikmkorse....
        {
            printf("%c",a[adil]);
        }
        printf("\n");
    }
    return 0;
}
