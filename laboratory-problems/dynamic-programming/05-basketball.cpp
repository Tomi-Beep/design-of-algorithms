#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    long long s1[n + 1], s2[n + 1];
    for (int i = 1; i <= n; i++) cin >> s1[i];
    for (int i = 1; i <= n; i++) cin >> s2[i];
 
    long long dp1[n + 1], dp2[n + 1];
    dp1[1] = s1[1];
    dp2[1] = s2[1];
 
    if (n == 1) {
        cout << max(dp1[1], dp2[1]) << endl;
        return 0;
    }
 
    dp1[2] = s2[1] + s1[2];
    dp2[2] = s1[1] + s2[2];
 
    for (int i = 3; i <= n; i++) {
        dp1[i] = s1[i] + max(dp2[i - 1], dp2[i - 2]);
        dp2[i] = s2[i] + max(dp1[i - 1], dp1[i - 2]);
    }
 
    cout << max(dp1[n], dp2[n]);
 
 
    return 0;
}
