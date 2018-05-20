#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n;
    int t;
    cin>>t;
    cin>>n;
    switch(t)
    {
    case 1:
        printf("Total: R$ %0.2lf\n",4*n);
        break;
        case 2:
        printf("Total: R$ %0.2lf\n",4.5*n);
        break;
        case 3:
        printf("Total: R$ %0.2lf\n",5*n);
        break;
        case 4:
        printf("Total: R$ %0.2lf\n",2*n);
        break;
        case 5:
            printf("Total: R$ %0.2lf\n",n*1.5);
    }
    return 0;
}

