#include <iostream>

using namespace std;

const int MAX_N = 200005;

class UnionFind {
private:
    int parent[MAX_N];
    int rank[MAX_N];

public:
    UnionFind(int n) {
        for (int i = 0; i < n; i++) {
            parent[i] = i;
            rank[i] = 0;
        }
    }

    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }

    void unite(int x, int y) {
        int root_x = find(x);
        int root_y = find(y);

        if (root_x == root_y) {
            return;
        }

        if (rank[root_x] < rank[root_y]) {
            parent[root_x] = root_y;
        } else if (rank[root_x] > rank[root_y]) {
            parent[root_y] = root_x;
        } else {
            parent[root_y] = root_x;
            rank[root_x]++;
        }
    }

    bool isConnected(int x, int y) {
        return find(x) == find(y);
    }
};

int main() {

    int n, q;
    cin >> n >> q;

    UnionFind uf(n);

    for (int i = 0; i < q; i++) {
        int query_type, u, v;
        cin >> query_type >> u >> v;

        if (query_type == 0) {
            uf.unite(u, v);
        } else {
            cout << (uf.isConnected(u, v) ? 1 : 0) << '\n';
        }
    }

    return 0;
}
