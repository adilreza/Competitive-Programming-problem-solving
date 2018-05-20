#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,count=0,l;
    char c[100000];
    while(gets(c))
    {
        l=strlen(c);
        for(i=0; i<l; i++)
        {
            if(c[i]=='"')
            {
                count=count+1;
                if(count%2==1)
                    printf("``");
                else
                    printf("''");
            }
            else
                printf("%c",c[i]);
        }
        printf("\n");
    }
    return 0;
}
