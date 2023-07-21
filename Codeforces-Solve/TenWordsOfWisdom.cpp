#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int winnerIndex = -1;
        int winnerQuality = -1;

        for (int i = 0; i < n; i++) {
            int words, quality;
            cin >> words >> quality;

            if (words <= 10 && quality > winnerQuality) {
                winnerIndex = i + 1;
                winnerQuality = quality;
            }
        }

        cout << winnerIndex << endl;
    }

    return 0;
}

