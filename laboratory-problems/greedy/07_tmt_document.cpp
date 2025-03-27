#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int j = 0; j < t; j++) {
        int n;
        cin >> n;
        char sequence[n];
        int tIndex[n];
        int tCounter = 0, mCounter = 0;
        int mIndex[n];
        for (int i = 0; i < n; i++) {
            cin >> sequence[i];
            if (sequence[i] == 'T') {
                tIndex[tCounter] = i;
                tCounter++;
            } else {
                mIndex[mCounter] = i;
                mCounter++;
            }
        }

        bool valid = true;

        if (tCounter != 2 * mCounter) {
            valid = false;
        } else {
            for (int i = 0; i < tCounter / 2; i++) {
                if (!(tIndex[i] < mIndex[i] && mIndex[i] < tIndex[i + mCounter])) {
                    valid = false;
                    break;
                }
            }
        }

        if (valid) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

    }
    return 0;
}
