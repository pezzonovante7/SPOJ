#include <bits/stdc++.h>
using namespace std;
using ll = long long;

map<ll,ll> dp;

ll go(ll n)
{
    ll r;
    
    if(dp[n])return dp[n];
    
    if(n<=6)return n;
    
    r = max(n,go(n/2)+go(n/3)+go(n/4));
    
    dp[n] = r;
    
    return r;
}

int main() 
{
    ll n;
    while(cin>>n)
    {
        cout<<go(n)<<endl;
    }
	return 0;
}
