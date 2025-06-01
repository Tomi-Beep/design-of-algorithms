#include <iostream>
#include <bits/stdc++.h>
#include <queue>

using namespace std;


int main() {
    int t;
    cin >> t;
    for (int z = 0; z < t; z++) {
        int n, m;
        cin >> n;
        cin >> m;
        vector<vector<int> > graph(n, vector<int>(n, int(1e9)));
        for (int i = 0; i < n; i++) {
            graph[i][i]=0;
        }

        for (int i = 0; i < m; i++) {
            int a, b;
            cin >> a >> b;
            graph[a][b] = 1;
            graph[b][a] = 1;
        }
        for (int k = 0; k < n; k++) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (graph[i][k] == 10e9 || graph[k][j] == 10e9)
                        continue;
                    if (graph[i][j] > graph[i][k] + graph[k][j])
                        graph[i][j] = graph[i][k] + graph[k][j];
                }
            }
        }

        int s, d;
        cin >> s >> d;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            if(s!=i)
                sum=max(sum,graph[s][i] + graph[i][d]);
        }

    cout<<"Case "<<z+1<<": "<<sum<<endl;
    }
}
