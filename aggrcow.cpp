#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool canPlace(vector<ll> v,ll d,ll c)
{
    ll prev = 0;c--;
    ll n = v.size();
    for(int i=1;i<n;i++)
    {
        if(v[i]-v[prev]>=d)
        {
            prev = i;
            c--;
        }
        if(c==0)return true;
    }
    return false;
}

ll go(vector<ll> v,ll c)
{
    ll n = v.size();
    ll l = 0 , h = v[n-1]-v[0], ans;
    while(l<=h)
    {
        ll m = (l+h)/2;
        if(canPlace(v,m,c))
        {
            ans = m;
            l = m + 1;
        }
        else
        {
            h = m -1;
        }
    }
    return ans;
}

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,c;
        cin>>n>>c;
        vector<ll> v(n);
        for(ll &x: v)cin>>x;
        
        sort(v.begin(),v.end());
        cout<<go(v,c)<<endl;
    }
	return 0;
}
