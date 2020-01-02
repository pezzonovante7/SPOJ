#include<bits/stdc++.h>
using namespace std;
vector<int> g[100007];
vector<bool> visited(100007,false);
int v, m = 0,st;

void dfs(int s,int d)
{
	if(d>m)
	{
		m = d;
		st = s;
	}
	visited[s] = true;
	for(unsigned int i=0;i < g[s].size();i++)
	{
		if(!visited[g[s][i]])
			dfs(g[s][i],d+1);
	}
}

int main()
{
	cin>>v;
	int x,y;
	for(int i = 0 ; i < v - 1 ; i++)
	{
		cin>>x>>y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	dfs(1,0);
	fill(visited.begin()+1,visited.begin()+v+1,false);
	m = 0;
	dfs(st,0);
	cout<<m<<endl;
} 
