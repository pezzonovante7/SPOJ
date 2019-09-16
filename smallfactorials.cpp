#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll go(ll n)
{
    if(n==0||n==1)return 1;
    return n*go(n-1);
}

int main() 
{
    ll t,n;
    cin>>t;
    
    while(t--)
    {
        cin>>n;
        cout<<go(n);
        cout<<endl;
    }
    return 0;
}
