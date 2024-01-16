#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<pair<int, int>> p;
        for (int i = 0; i < 4; i++) {
            int a, b;
            cin >> a >> b;
            p.push_back(make_pair(a, b));
        }

        sort(p.begin(), p.end());

        cout << (long long)((p[1].second - p[0].second) * (p[2].first - p[1].first))<< endl;
    }
    return 0;
}
