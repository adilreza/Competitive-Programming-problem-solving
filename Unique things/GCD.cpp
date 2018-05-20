#include<bits/stdc++.h>
using namespace std;
int adil(int a,int b);
/*int main()
{
    int a,b;
    cout<<"Enter two number:"<<endl;
    cin>>a>>b;
    int gcd=adil(a,b);
    cout<<gcd<<endl;
    return main();
}
int adil(int a,int b)
{
    if((a>=b)&&(a%b==0))
        return b;
    else
        adil(b,(a%b));
}*/
int main()
{
    int a,b,s,r,i;
    cin>>a>>b;
    if(a>=b)
        s=b;
    else
        s=a;
    for(i=s; i>=1; i--)
    {
        if(a%i==0&&b%i==0)
        {
            r=i;
            break;
        }
    }
    printf("%d\n",r);
    return main();
}
