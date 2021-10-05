#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
int main()
{
    int n, m;
    cout << "Enter vertex and edges" << endl;
    cin >> n >> m;
    vector<vector<int>> edges;
    cout << "Enter the src, dest and weight" << endl;
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        edges.push_back({u, v, w});
    }
    int src;
    cout << "Enter the src vertex" << endl;
    cin >> src;
    vector<int> dist(n, INF);
    dist[src] = 0;
    for (int iter = 0; iter < n - 1; iter++)
    {
        for (auto e : edges)
        {
            int u = e[0];
            int v = e[1];
            int w = e[2];
            dist[v] = min(dist[v], w + dist[u]);
        }
    }
    cout << "Min distance from src "<< n-1 << endl;
    for (auto i : dist)
    {
        cout << i << " ";
    }
    cout << "\n";
    return 0;
}
