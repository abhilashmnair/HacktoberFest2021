#include<bits/stdc++.h>
using namespace std;
vector<int> visited;
vector<vector<int>> adj;
vector<int> ans;
void dfs(int n)
{
	visited[n] = 1;
	for(auto i:adj[n])
	{
		if(!visited[i])
		{
			dfs(i);
		}
	}
	ans.push_back(n);
}
void top_sort(int n)
{
	for(int i=0;i<n;i++)
	{
		if(!visited[i])
		{
			dfs(i);
		}
	}
	reverse(ans.begin(),ans.end());
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
		//x--;
		//y--;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	top_sort(v);
	for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
}
