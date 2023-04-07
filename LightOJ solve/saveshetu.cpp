#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, N, K, sum;
    string operation;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        cin >> N;
        sum = 0;
        cout << "Case " << i << ":\n";
        for (int j = 1; j <= N; j++)
        {
            cin >> operation;
            if (operation == "donate")
            {
                cin >> K;
                sum += K;
            }
            else
            {
                cout << sum << "\n";
            }
        }
    }
    return 0;
}
