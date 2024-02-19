#include<bits/stdc++.h>
using namespace std;



int main() {
    int t;
    cin >> t;

    while (t --> 0) {
        int n;
        cin >> n;

        vector<vector<int>> arr(n, vector<int>(n));

        vector<string> li(n);
        for (int i = 0; i < n; i++) {
            cin >> li[i];
            for (int j = 0; j < n; j++) {
                char c = li[i][j];
                if (c == '1') {
                    arr[i][j] = 1;
                } else {
                    arr[i][j] = 0;
                }
            }
        }

        int triangle = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 1; j < n - 1; j++) {
                if (arr[i][j] == 1) {
                    if (arr[i][j - 1] == 0 && arr[i][j + 1] == 0) {
                        triangle = 1;
                        break;
                    }
                }
            }
        }

        if (triangle == 1) {
            cout << "TRIANGLE" << endl;
        } else {
            cout << "SQUARE" << endl;
        }

    }
    return 0;
}
