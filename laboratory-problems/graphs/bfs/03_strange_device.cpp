#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    if (n >= m) {
        cout << n - m << endl;
        return 0;
    }

    vector<bool> visited(2 * m + 1, false);
    queue<pair<int, int>> q;
    q.emplace(n, 0);
    visited[n] = true;

    while (!q.empty()) {
        auto [current, steps] = q.front();
        q.pop();

        if (current == m) {
            cout << steps << endl;
            return 0;
        }

        if (current * 2 <= 2 * m && !visited[current * 2]) {
            q.emplace(current * 2, steps + 1);
            visited[current * 2] = true;
        }
        if (current - 1 >= 0 && !visited[current - 1]) {
            q.emplace(current - 1, steps + 1);
            visited[current - 1] = true;
        }
    }

    return 0;
}
