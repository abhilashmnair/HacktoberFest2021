#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 6;
vector<int> parent(N); //parent element to identify
vector<int> sz(N);

void make_set(int v)
{
    parent[v] = v; //we make element as it's own parent
    sz[v] = v;
}
int find_set(int v)
{
    if (v == parent[v])
    {
        return v;
    }
    return parent[v] = find_set(parent[v]);
}
void union_sets(int a, int b)
{
    a = find_set(a);
    b = find_set(b);
    if (a != b)
    {
        if (sz[a] < sz[b])
            swap(a, b);
        parent[b] = a;
        sz[a] += sz[b];
    }
}

int main()
{
    for (int i = 0; i < N; i++)
    {
        make_set(i);
    }
    int n, m;
    cout << "Enter Vertex and Edges" << endl;
    cin >> n >> m;
    vector<vector<int>> edges;
    cout << "Enter src_vertex, dest_vertex, weight" << endl;
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        edges.push_back({w, u, v});
    }
    sort(edges.begin(), edges.end()); //sorting accordin to edge weight
    int cost = 0;                     //to count the cost of msp
    cout << "Following are the edges to include" << endl;
    for (auto i : edges)
    {
        int w = i[0];
        int u = i[1];
        int v = i[2];
        int x = find_set(u);
        int y = find_set(v);
        if (x == y)
        {
            continue;
        }
        else
        {
            cout << u << " " << v << endl;
            cost += w;
            union_sets(u, v);
        }
    }
    cout << "Cost of MST: " << cost;
    return 0;
}
