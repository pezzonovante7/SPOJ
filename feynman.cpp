#include <bits/stdc++.h>
#define ll long long;
using namespace std;

int main() 
{
    ll n;
    while(true)
    {
        cin>>n;
        if(n==0)break;
        cout<<(n*(n+1)*(2*n+1))/6<<endl;
    }
	return 0;
}
