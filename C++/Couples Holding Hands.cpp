#include <bits/stdc++.h>
using namespace std;

// There are n couples sitting in 2n seats arranged in a row and want to hold hands.
// Return the minimum number of swaps so that every couple is sitting side by side.
int par[1000];
int find(int a){
    if(par[a] < 0) return a;
    return par[a] = find(par[a]);
}

void Union(int a, int b){
    a = find(a);
    b = find(b);
    if(a != b)
        par[a] = b;
}

int minSwapsCouples(vector<int>& row) {
    memset(par, -1, sizeof(par));
    int n = row.size()/2;
    for(int i = 0; i < n; i++){
        int x = row[i * 2] / 2;
        int y = row[i * 2 + 1] / 2;
        Union(x, y);
    }
    unordered_set<int> s;
    for(int i = 0; i < n; i++)
        s.insert(find(i));
    return n - s.size();
}

int main() {
    vector<int> row = {0,2,1,3};
    cout << minSwapsCouples(row);
}