#include <bits/stdc++.h>
using namespace std;
using ll= long long;

ll go(ll n)
{
    ll sum = 0;
    for(int i=1;i<=sqrt(n);i++)
    {
        sum += n/i - i + 1;
    }
    return sum;
}

int main() 
{
    ll n;
    cin>>n;
    cout<<go(n)<<endl;
	return 0;
}
