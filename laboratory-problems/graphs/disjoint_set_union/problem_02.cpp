#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int q[1001];
    for (int i = 1; i <= n; ++i) {
        cin >> q[i];
    }
    int m;
    cin >> m;
    int a[10001], b[10001], c[10001];
    for (int i = 0; i < m; ++i) {
        cin >> a[i] >> b[i] >> c[i];
    }
    
    int max_q = -1;
    int root = -1;
    for (int i = 1; i <= n; ++i) {
        if (q[i] > max_q) {
            max_q = q[i];
            root = i;
        }
    }
    
    int min_cost[1001];
    bool has_supervisor[1001] = {false};
    for (int i = 1; i <= n; ++i) {
        min_cost[i] = 1000001; 
    }
    
    for (int i = 0; i < m; ++i) {
        int ai = a[i], bi = b[i], ci_val = c[i];
        if (q[ai] > q[bi]) {
            if (ci_val < min_cost[bi]) {
                min_cost[bi] = ci_val;
                has_supervisor[bi] = true;
            }
        }
    }

    bool possible = true;
    for (int i = 1; i <= n; ++i) {
        if (i != root && !has_supervisor[i]) {
            possible = false;
            break;
        }
    }

    if (!possible) {
        cout << -1 << endl;
        return 0;
    }
    
    int total_cost = 0;
    for (int i = 1; i <= n; ++i) {
        if (i != root) {
            total_cost += min_cost[i];
        }
    }
    cout << total_cost << endl;

    return 0;
}
