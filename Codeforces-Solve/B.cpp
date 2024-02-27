#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; ++i)
            cin >> v[i];

        long long sum = 0;
        for (int i = 0; i < n; ++i)
            sum += v[i];

        if (sum % 3 == 0) {
            cout << "0" << endl;
            continue;
        }
        if (sum % 3 == 2) {
            cout << "1" << endl;
            continue;
        }
        bool found = false;
        for (int i = 0; i < n; i++) {
            long long temp = sum - v[i];
            if (temp % 3 == 0) {
                cout << "1" << endl;
                found = true;
                break;
            }
        }
        if (!found)
            cout << "2" << endl;
    }

    return 0;
}
