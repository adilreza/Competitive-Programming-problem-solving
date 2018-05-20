#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char a[100];
    int i=0;
    while(scanf("%s",a))
    {i++;
    if(strcmp(a,"Hajj")==0)
        printf("Case %d: Hajj-e-Akbar\n",i);
    else if(strcmp(a,"Umrah")==0)
        printf("Case %d: Hajj-e-Asghar\n",i);
    else if(strcmp(a,"*")==0)
        break;
    else
        return 0;
    }
    return 0;
}
