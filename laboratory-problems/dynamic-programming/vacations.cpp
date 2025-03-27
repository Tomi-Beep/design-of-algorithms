#include <iostream>
#include <algorithm>
using namespace std;

const int INF = 1e9;

int main() {
    int n;
    cin >> n;
    int a[101];
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    int dp[101][3];
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j < 3; ++j) {
            dp[i][j] = INF;
        }
    }

    dp[1][0] = 1;
    if (a[1] == 1 || a[1] == 3) {
        dp[1][1] = 0;
    }
    if (a[1] == 2 || a[1] == 3) {
        dp[1][2] = 0;
    }

    for (int i = 2; i <= n; ++i) {
        dp[i][0] = 1 + min({dp[i-1][0], dp[i-1][1], dp[i-1][2]});

        if (a[i] == 1 || a[i] == 3) {
            dp[i][1] = min(dp[i-1][0], dp[i-1][2]);
        }

        if (a[i] == 2 || a[i] == 3) {
            dp[i][2] = min(dp[i-1][0], dp[i-1][1]);
        }
    }

    int result = min({dp[n][0], dp[n][1], dp[n][2]});
    cout << result << endl;

    return 0;
}
