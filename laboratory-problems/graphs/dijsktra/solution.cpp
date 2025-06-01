#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;


int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<pair<int, long long> > > graph(n + 1);
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        graph[a].emplace_back(b, c);
        graph[b].emplace_back(a, c);
    }
    vector<long long> distance(n + 1, LLONG_MAX);
    priority_queue<pair<long long, int>, vector<pair<long long, int> >, greater<> > q;
    distance[1] = 0;
    vector<int> parents(n + 1);
    for (int i = 1; i <= n; i++) {
        parents[i] = i;
    }
    q.emplace(0, 1);
    while (!q.empty()) {
        auto [dist, from] = q.top();
        q.pop();

        if (dist > distance[from])
            continue;

        for (auto &[to, weight]: graph[from]) {
            if (distance[from] == LLONG_MAX) continue;
            if (distance[to] > distance[from] + weight) {
                distance[to] = distance[from] + weight;
                parents[to] = from;
                q.emplace(distance[to], to);
            }
        }
    }

    vector<int> path;
    int k = n;
    while (parents[k] != k) {
        path.push_back(k);
        k = parents[k];
    }
    path.push_back(k);
    if (path[path.size() - 1] != 1)
        cout << "-1";
    else
        for (int i = path.size() - 1; i >= 0; i--) {
            cout << path[i] << " ";
        }


    return 0;
}
