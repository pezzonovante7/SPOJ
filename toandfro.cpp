#include <bits/stdc++.h>
using namespace std;

void go(string s,int c)
{
    int n = s.length();
    int r = n/c;
    char m[r][c];
    int k=0;
    for(int i=0;i<r;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<c;j++)
            {
                m[i][j]=s[k++];
            }
        }
        else
        {
            for(int j=c-1;j>=0;j--)
            {
                m[i][j]=s[k++];
            }
        
        }
    }
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            cout<<m[j][i];
        }
    }
    cout<<endl;
}

int main() 
{
    int r,c;
    string s;
    
    while(true)
    {
        cin>>c;
        if(c==0)
            break;
        cin.ignore();
        getline(cin,s);
        go(s,c);
    }
	return 0;
}
