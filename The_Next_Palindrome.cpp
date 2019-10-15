#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool areAll9s(string s)
{
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!='9')
            return false;
    }
    return true;
}

bool isPallindrome(string s)
{
    int n= s.length();
    int i = 0, j = n-1;
    while(i<j)
    {
        if(s[i++]!=s[j--])
            return false;
    }
    return true;
}

void printInc(string s)
{
    ll i , j , n =s.length();
    
    if(n%2==0)
    {
        i = n/2-1;
        j = n/2;
        if(s[i]!='9')
        {
            s[i]=s[i]+1;
            s[j]=s[j]+1;
        }
        else
        {
            s[i]='0';s[j]='0';
            i--;j++;
            while(s[i]=='9')
            {
                s[i]='0';s[j]='0';
                i--;j++;
            }
            s[i]=s[i]+1;s[j]=s[j]+1;
        }
    }
    else
    {
        i = j = n/2;
        
        if(s[i]!='9')
        {
            s[i]=s[i]+1;
        }
        else
        {
            s[i]='0';
            i--;j++;
            while(s[i]=='9')
            {
                s[i]='0';s[j]='0';
                i--;j++;
            }
            s[i]=s[i]+1;s[j]=s[j]+1;
        }
    }
    cout<<s<<endl;
}

void printReverse(string s)
{
    ll n = s.length();
    if(n%2==0)
    {
        for(ll i =0;i<n/2;i++)
        {
            cout<<s[i];
        }
        for(ll i=n/2-1;i>=0;i--)
        {
            cout<<s[i];
        }
        cout<<endl;
        return;
    }
    else
    {
        for(ll i =0;i<=n/2;i++)
        {
            cout<<s[i];
        }
        for(ll i=n/2-1;i>=0;i--)
        {
            cout<<s[i];
        }
        cout<<endl;
        return;
    }
}

void go(string s)
{
    ll n = s.length();
    if(areAll9s(s))
    {
        cout<<"1";
        n--;
        while(n--)
        {
            cout<<"0";   
        }
        cout<<"1\n";
        return;
    }
    
    if(isPallindrome(s))
    {
        printInc(s);
        return;
    }
    else
    {
        ll i , j;
        if(n%2==0)
        {
            i = n/2-1;
            j = n/2;
            while(s[i]==s[j])i--,j++;
            if(s[i]>s[j])
            {
                printReverse(s);
                return;
            }
            else
            {
                for(ll i = 0,j=n-1;i<j;i++,j--)
                    s[j]=s[i];
                printInc(s);
                return;
            }
        }
        else
        {
            i = n/2 , j=n/2;
            while(s[i]==s[j])i--,j++;
            if(s[i]>s[j])
            {
                printReverse(s);
                return;
            }
            else
            {
                for(ll i = 0,j=n-1;i<j;i++,j--)
                    s[j]=s[i];
                printInc(s);
                return;
            }
        }
    }
    
}


int main() 
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        go(s);
    }
	return 0;
}
