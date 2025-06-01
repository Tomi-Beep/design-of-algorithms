#include <iostream>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

int main() {
    int n, m, j;
    cin >> n >> m >> j;
    char a[n][m];
    vector<pair<int, int>> entrances;
    pair<int, int> treasure;

    for (int i = 0; i < n; i++) {
        for (int k = 0; k < m; k++) {
            cin >> a[i][k];
            if (a[i][k] == '@') {
                entrances.emplace_back(i, k);
            }
            if (a[i][k] == 'x') {
                treasure = make_pair(i, k);
            }
        }
    }

    queue<pair<pair<int, int>, pair<int, bool>>> fringe;
    bool visited[n][m][21][2];
    memset(visited, 0, sizeof(visited));

    for (pair<int, int> entrance : entrances) {
        fringe.emplace(entrance, make_pair(j, false));
        visited[entrance.first][entrance.second][j][0] = true;
    }

    while (!fringe.empty()) {
        auto current = fringe.front();
        fringe.pop();

        auto player = current.first;
        int pj = current.second.first;
        bool taken = current.second.second;

        if (player == treasure) {
            taken = true;
        }

        for (pair<int, int> ent : entrances) {
            if (player == ent && taken) {
                cout << "SUCCESS";
                return 0;
            }
        }

        for (int d = 0; d < 4; d++) {
            int nx = player.first, ny = player.second;
            if (d == 0) nx++;
            if (d == 1) nx--;
            if (d == 2) ny++;
            if (d == 3) ny--;

            if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
            if (a[nx][ny] == '#') continue;

            int next_j = pj;
            if (a[nx][ny] == 's') {
                if (next_j > 0) next_j--;
                else continue;
            }

            if (!visited[nx][ny][next_j][taken]) {
                visited[nx][ny][next_j][taken] = true;
                fringe.emplace(make_pair(nx, ny), make_pair(next_j, taken));
            }
        }
    }

    cout << "IMPOSSIBLE";
    return 0;
}
