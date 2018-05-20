#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,k;
    string s="0001";
    sort(s.begin(),s.end());
    k=1;
    do
    {
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));
    return 0;
}

