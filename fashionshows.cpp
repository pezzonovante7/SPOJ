#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> m(n);
        vector<int> w(n);
        for(int &x: m)cin>>x;
        for(int &y: w)cin>>y;
        sort(m.begin(),m.end());
        sort(w.begin(),w.end());
        int sum = 0;
        for(int i=0;i<n;i++)
            sum+=m[i]*w[i];
        cout<<sum<<endl;
    }
	return 0;
}
