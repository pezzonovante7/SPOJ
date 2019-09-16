#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if(n<2)return false;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int main() 
{
    int l,r,t;
    cin>>t;
    
    while(t--)
    {
        cin>>l>>r;
        for(int i=l;i<=r;i++)
        {
            if(isPrime(i))
                cout<<i<<endl;
        }
        cout<<endl;
    }
    return 0;
}
