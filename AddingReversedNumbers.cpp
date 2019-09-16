#include <bits/stdc++.h>
using namespace std;

int getReverse(int n)
{
    int r=0;
    while(n)
    {
        r = r*10;
        r += n%10;
        n = n/10;
    }
    return r;
}
int main() 
{
    int l,r,t;
    cin>>t;
    
    while(t--)
    {
        cin>>l>>r;
        cout<<getReverse(getReverse(l)+getReverse(r));
        cout<<endl;
    }
    return 0;
}
