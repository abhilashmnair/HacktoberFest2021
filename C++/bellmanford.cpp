#include<bits/stdc++.h>
using namespace std;
vector<vector<pair<int,int>>> adj;
vector<int> dist;
void bellman(int src,int v,int e)
{
	dist[src] = 0;
	for(int i=0;i<v-1;i++)
	{
		for(int j=0;j<e;j++)
		{
			for(auto k:adj[j]) //instead u could take all the edges in a vector<pair> and use to decrease complexity
			{
				int src = j;
				int dest = k.first;
				int w = k.second;
				if(dist[src]!=INT_MAX && dist[dest]>dist[src] + w)
				{
					dist[dest] = dist[src] + w;
				}
			}
		}
	}
	for(int j=0;j<e;j++)
		{
			for(auto k:adj[j]) //instead u could take all the edges in a vector<pair> and use to decrease complexity
			{
				int src = j;
				int dest = k.first;
				int w = k.second;
				if(dist[src]!=INT_MAX && dist[dest]>dist[src] + w)
				{
					cout<<"Graph contains negative weight cycle";
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
	bellman(0,v,e);
	for(auto i:dist)cout<<i<<" ";
}
