#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll go(ll n)
{
    int r=0;
    while(n)
    {
        r+=floor(n/5);
        n=n/5;
    }
    return r;
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
