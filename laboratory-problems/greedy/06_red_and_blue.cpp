#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int j = 0; j < t; j++) {
        int n;
        cin >> n;
        string squares;
        cin >> squares;

        if (n == 1) {
            if (squares[0] == '?')
                cout << 'B' << endl;
            else
                cout << squares[0] << endl;
            continue;
        }
        
        int first_non_q = -1;
        for (int i = 0; i < n; i++) {
            if (squares[i] != '?') {
                first_non_q = i;
                break;
            }
        }
        
        if (first_non_q == -1) {
            squares[0] = 'B';
            for (int i = 1; i < n; i++) {
                squares[i] = (squares[i - 1] == 'B') ? 'R' : 'B';
            }
        } else {
            for (int i = first_non_q - 1; i >= 0; i--) {
                squares[i] = (squares[i + 1] == 'B') ? 'R' : 'B';
            }
            for (int i = first_non_q + 1; i < n; i++) {
                if (squares[i] == '?') {
                    squares[i] = (squares[i - 1] == 'B') ? 'R' : 'B';
                }
            }
        }

        cout << squares << endl;
    }
    return 0;
}
