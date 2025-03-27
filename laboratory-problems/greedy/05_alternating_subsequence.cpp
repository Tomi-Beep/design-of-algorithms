#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int j = 0; j < t; j++) {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long sum;
        sum = a[0];
        int index = 0;
        bool sign = a[0] > 0;

        for (int i = 1; i < n; i++) {
            if (sign == a[i] > 0) {
                if (sum - a[index] + a[i] > sum) {
                    sum = sum - a[index] + a[i];
                    index = i;
                }
            } else {
                sign = !sign;
                index = i;
                sum = sum + a[i];
            }
        }

        cout << sum << endl;
    }
    return 0;
}
