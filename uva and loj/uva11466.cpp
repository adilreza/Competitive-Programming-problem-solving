#include<bits/stdc++.h>
using namespace std;
int adil(long long tak)
{
    long long int b=1,j,i;
    j=sqrt(tak);
    for(i=2; i<=j; i++)
    {
        if(tak%i==0)
        {
            b=0;
            break;
        }
    }
    return b;
}
int main()
{
  long long i,j,n,k,s;
  while(1)
  {
      scanf("%lld",&n);
      if(n==0)
        break;
      s=sqrt(n);
      for(i=2;i<=s+1;i++)
      {
          if(n%i==0)
          {
              if(adil(n/i))
              {
                  printf("%lld\n",n/i);
                  break;
              }
          }
      }
  }
}
