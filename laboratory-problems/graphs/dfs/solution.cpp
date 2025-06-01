#include <iostream>
#include <vector>
using namespace std;

void dfs(int node, int color, vector<vector<int>> &adj, vector<int> &colors, int &countA, int &countB) {
    if (color == 0)
        countA++;
    else
        countB++;
    colors[node] = color;

    for (int neighbor : adj[node]) {
        if (colors[neighbor] == -1) {
            dfs(neighbor, 1 - color, adj, colors, countA, countB);
        }
    }
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> graph(n + 1);
    for (int i = 0; i < n - 1; ++i) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    vector<int> colors(n + 1, -1);
    int countA = 0, countB = 0;

    dfs(1, 0, graph, colors, countA, countB);

    long long skros = (long long)countA * countB - (n - 1);
    cout << skros << endl;

    return 0;
}
