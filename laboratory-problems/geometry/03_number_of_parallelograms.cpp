#include<bits/stdc++.h>

using namespace std;

struct point {
    long long x, y;

    bool operator<(const point &p) const {
        return x < p.x || (x == p.x && y < p.y);
    }
};

long long choose(long long numero) {
    return ((numero - 1) * numero) / 2;
}

int main() {
    int n;
    cin >> n;
    vector<point> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i].x >> p[i].y;
    }

    sort(p.begin(), p.end());
    map<pair<long long, long long>, int> skros;

    for (int i = 0; i < n; i++) {
        auto &[ax,ay] = p[i];
        for (int j = i + 1; j < n; j++) {
            auto &[bx,by] = p[j];
            pair<long long, long long> sredina;
            sredina.first = (ax + bx);
            sredina.second = (ay + by);
            skros[sredina]++;
        }
    }

    long long counter = 0;
    for (auto r: skros) {
        counter += choose(r.second);
    }
    cout<<counter<<endl;
}
