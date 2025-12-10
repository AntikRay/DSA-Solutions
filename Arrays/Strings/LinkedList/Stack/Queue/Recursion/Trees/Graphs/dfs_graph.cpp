#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<vector<int>>& adj, vector<bool>& visited) {
    visited[node] = true;
    cout << node << " ";

    for (int nbr : adj[node]) {
        if (!visited[nbr]) {
            dfs(nbr, adj, visited);
        }
    }
}

int main() {
    vector<vector<int>> adj = {
        {},         // 0 unused
        {2, 3},     // 1
        {1, 4},     // 2
        {1},        // 3
        {2}         // 4
    };

    vector<bool> visited(5, false);
    dfs(1, adj, visited);
}
