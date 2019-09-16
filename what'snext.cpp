#include <bits/stdc++.h>
#define ll long long
using namespace std;

void go(ll a,ll b,ll c)
{
	if( b-a == c-b)
	{
		cout<<"AP "<<c+(b-a)<<endl;
	}
	else 
	{
		cout<<"GP "<<c*(b/a)<<endl;
	}
}

int main() 
{
    ll a,b,c;
    while(true)
    {
        cin>>a>>b>>c;
        if(a==0&&b==0&&c==0)break;
        go(a,b,c);
    }
	return 0;
}
