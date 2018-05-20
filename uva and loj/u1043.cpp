#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    if((a+b)<=c||(a+c)<=b||(b+c)<=a)
        printf("Area = %0.1lf\n",((a+b)/2)*c);
    else
        printf("Perimetro = %0.1lf\n",a+b+c);

    return 0;
}
