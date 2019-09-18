#include <bits/stdc++.h>
using namespace std;
using ll = long long;

map<int,ll> dp;

ll go(string s,int k)
{
    int len=s.length();
    int st=len-k;
    if(s[st]=='0')
        return 0;
    if(k<=1)
        return 1;
    if(dp[k])
        return dp[k];
        
    string temp = "";
    temp+=s[st];
    temp+=s[st+1];
    int z = stoi(temp);
    if(z>0&&z<27){
        return dp[k]=go(s,k-1)+go(s,k-2);
    }
    else{
        return dp[k]=go(s,k-1);
    }
 }


int main() 
{
    while(true)
    {
        string s;
        getline(cin,s);
        if(s.length()==1&&s[0]=='0')break;
        cout<<go(s,s.length())<<endl;
        dp.clear();
    }
}
