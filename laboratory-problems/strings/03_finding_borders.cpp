#include <bits/stdc++.h>
using namespace std;

vector<int> z(string s) {
    int n = s.size();
    vector<int> z(n);
    int x = 0, y = 0;
    for (int i = 1; i < n; i++) {
        z[i] = max(0, min(z[i - x], y - i + 1));
        while (i + z[i] < n && s[z[i]] == s[i + z[i]]) {
            x = i;
            y = i + z[i];
            z[i]++;
        }
    }
    return z;
}

int main() {
    string zbor;
    cin >> zbor;
    int n = zbor.size();
    vector<int> z_values = z(zbor);
    vector<int> skros;

    for (int i = n - 1; i > 0; i--) {
        if (z_values[i] == n - i) {
            skros.push_back(n - i);
        }
    }

    sort(skros.begin(), skros.end());
    for (int ate : skros) {
        cout << ate << " ";
    }

    return 0;
}
