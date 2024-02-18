#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        priority_queue<int, vector<int>, greater<int>> minHeap;


        for (int i = 0; i < 2 * n; ++i) {
            int num;
            cin >> num;
            minHeap.push(num);
        }

        int score = 0;


        for (int i = 0; i < n; ++i) {
            int x = minHeap.top();
            minHeap.pop();
            int y = minHeap.top();
            minHeap.pop();
            score += min(x, y);
        }

        cout << score << endl;
    }

    return 0;
}
