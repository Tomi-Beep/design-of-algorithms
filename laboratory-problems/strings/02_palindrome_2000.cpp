#include <bits/stdc++.h>
using namespace std;

int nzs(string a, string b) {
    int n = a.size(), m = b.size();
    vector<vector<int> > dp(n + 1, vector<int>(m + 1, 0));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i - 1] == b[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    return dp[n][m];
}

int main() {
    int n;
    cin >> n;
    string zbor;
    cin >> zbor;
    string obratno = zbor;
    reverse(obratno.begin(), obratno.end());
    int skros = nzs(zbor, obratno);
    cout << n - skros << endl;
    return 0;
}
