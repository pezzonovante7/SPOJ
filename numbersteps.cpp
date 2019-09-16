#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(x==y)
        {
            int n = x/2;
            if(x%2==0)
                cout<<4*n<<endl;
            else
                cout<<4*n+1<<endl;
        }
        else if(y == x-2)
        {
            int n = y/2;
            if(y%2==0)
                cout<<4*n+2<<endl;
            else
                cout<<4*n+3<<endl;
        }
        else
        {
            cout<<"No Number"<<endl;
        }
    }
	return 0;
}
