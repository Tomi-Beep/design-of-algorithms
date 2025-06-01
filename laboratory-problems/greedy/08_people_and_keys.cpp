#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n, k, p;
    cin >> n >> k >> p;
    vector<long long> people(n);
    vector<long long> keys(k);
    for (int i = 0; i < n; i++) {
        cin >> people[i];
    }
    for (int i = 0; i < k; i++) {
        cin >> keys[i];
    }

    sort(people.begin(), people.end());
    sort(keys.begin(), keys.end());
    long long minimus = LONG_LONG_MAX, sum;
    for (int i = 0; i < k - n + 1; i++) {
        sum = 0;
        for (int j = 0; j < n; j++) {
            sum = max(sum, abs(people[j] - keys[j + i]) + abs(keys[j + i] - p));
        }
        minimus = min(sum, minimus);
    }

    cout << minimus;
    return 0;
}
