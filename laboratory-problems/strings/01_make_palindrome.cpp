#include <bits/stdc++.h>
using namespace std;

int main() {
    string zbor;
    cin >> zbor;
    int n = zbor.size();
    vector<int> povtaranja(26, 0);

    for (char c : zbor) {
        povtaranja[c - 'a']++;
    }

    int i = 0, j = 25;
    while (i < j) {
        while (i < j && povtaranja[i] % 2 == 0) {
            i++;
        }
        while (i < j && povtaranja[j] % 2 == 0) {
            j--;
        }

        if (i < j) {
            povtaranja[i]++;
            povtaranja[j]--;
            i++;
            j--;
        }
    }

    string skros(n, ' ');
    if (n % 2 == 1) {
        for (int k = 0; k < 26; k++) {
            if (povtaranja[k] % 2 == 1) {
                skros[n / 2] = 'a' + k;
                povtaranja[k]--;
                break;
            }
        }
    }

    i = 0;
    j = n - 1;

    for (int k = 0; k < 26; k++) {
        while (povtaranja[k] >= 2) {
            skros[i] = 'a' + k;
            skros[j] = 'a' + k;
            povtaranja[k] -= 2;
            i++;
            j--;
        }
    }

    cout << skros << endl;

    return 0;
}
