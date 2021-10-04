#include<bits/stdc++.h>
using namespace std;
vector<int> dist;
vector<vector<pair<int,int>>> adj;
void findshp(int src)
{
	dist[src] = 0;
	priority_queue<int> p;
	p.push(src);
	while(!p.empty())
	{
		int u = p.top();
		p.pop();
		for(auto i:adj[u])
		{
			int v = i.first;
			int weight = i.second;
			if(dist[v] > dist[u] + weight)
			{
				dist[v] = dist[u] + weight;
				p.push(v);
			}
		}
	}
}
int main()
{
	int v,e,x,y,w;
	cin>>v>>e;
	adj.resize(v);
	dist.resize(v,INT_MAX);
	for(int i=0;i<e;i++)
	{
		cin>>x>>y>>w;
		adj[x].push_back(make_pair(y,w));
		adj[y].push_back(make_pair(x,w));
	}
	findshp(0);
	for(auto i:dist)cout<<i<<" ";
}
