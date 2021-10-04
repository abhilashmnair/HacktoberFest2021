#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<int> visited;
vector<int> dfsvisited;
bool isCycle(int src)
{
	visited[src] = 1;
	dfsvisited[src] = 1;
	for(auto i:adj[src])
	{
		if(!visited[i])
		{
			if(isCycle(i))return true;
		}
		else if(dfsvisited[i])return true;
	}
	dfsvisited[src] = 0;
	return false;
}
int main()
{
	int v,e,x,y;
	cin>>v>>e;
	visited.resize(v,0);
	adj.resize(v);
	dfsvisited.resize(v,0);
	for(int i=0;i<e;i++)
	{
		cin>>x>>y;
		cout<<x<<y;
		adj[x].push_back(y);
	}
	for(int i=0;i<v;i++)
	{
		if(!visited[i])
		{
			if(isCycle(i))cout<<"Cycle";
		}
	}
}
