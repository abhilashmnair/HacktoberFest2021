#include<bits/stdc++.h>
using namespace std;
vector<int> visited;
vector<vector<int>> adj;
void dfs(int n)
{
	visited[n] = 1;
	cout<<n+1<<" ";
	for(auto i:adj[n])
	{
		if(!visited[i])
		{
			dfs(i);
		}
	}
}
int main()
{
	int v,e,x,y;
	cin>>v>>e;
	visited.resize(v,0);
	adj.resize(v);
	for(int i=0;i<e;i++)
	{
		cin>>x>>y;
		x--;
		y--;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	dfs(0);
	//If there are more than 1 connected components run a for loop with number of vertices and dfs(i) in that.
}
