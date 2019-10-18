#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n%2)
        {
            string s = "92";
            ll x = 1 + ((n+1)/2-1)*5;
            s = to_string(x)+s;
            cout<<s<<endl;
        }
        else
        {
            string s = "42";
            ll x = 4 + (n/2-1)*5;
            s = to_string(x)+s;
            cout<<s<<endl;
        }
    }
	return 0;
}
