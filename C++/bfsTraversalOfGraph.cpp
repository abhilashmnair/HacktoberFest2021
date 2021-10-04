#include <bits/stdc++.h>
using namespace std;
void bfs(vector<int> adj[], vector<bool> &isVisited, int start)
{
    isVisited[start] = true;
    queue<int> q;
    q.push(start);
    while (!q.empty())
    {
        int cur = q.front();
        q.pop();
        cout << cur << " ";

        for (auto it : adj[cur])
        {
            if (!isVisited[it])
            {
                isVisited[it] = true;
                q.push(it);
            }
        }
    }
    return;
}
int main()
{
    cout << "Enter number of vertices" << endl;
    int n;
    cin >> n;
    cout << "Enter number of edges" << endl;
    int edges;
    cin >> edges;
    cout << "Enter source and destination vertices of edges" << endl;
    //vertex starting from 1
    vector<int> adj[n + 1];
    for (int i = 0; i < edges; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b); // only for directed graph
        //adj[b].push_back(a); // add this line for undirected graph
    }
    vector<bool> isVisited(n + 1, false);

    for (int i = 1; i <= n; i++)
    {
        if (!isVisited[i])
            bfs(adj, isVisited, i);
    }

    return 0;
}

/*
V: number of vertices
E: number of edges
Tc:  O(V+E)(for disconnected components) + O(V)
Sc: O(V+E) for adjacancy list
    O(V) : for queue

*/