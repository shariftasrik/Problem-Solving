#include <iostream>

using namespace std;

int max_prefix(int n,int m,string a, string b) {
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (a[i] == b[j]) {
            i++;
        }
        j++;
    }
    return i;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;


        cout << max_prefix(n,m,a, b) << endl;
    }

    return 0;
}
