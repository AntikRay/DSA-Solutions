#include <bits/stdc++.h>
using namespace std;

void bfs(int start, vector<vector<int>>& adj) {
    queue<int> q;
    vector<bool> visited(adj.size(), false);

    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        cout << node << " ";

        for (int nbr : adj[node]) {
            if (!visited[nbr]) {
                visited[nbr] = true;
                q.push(nbr);
            }
        }
    }
}

int main() {
    vector<vector<int>> adj = {
        {},         // 0 (unused)
        {2, 3},     // 1
        {1, 4},     // 2
        {1},        // 3
        {2}         // 4
    };

    bfs(1, adj);
}
