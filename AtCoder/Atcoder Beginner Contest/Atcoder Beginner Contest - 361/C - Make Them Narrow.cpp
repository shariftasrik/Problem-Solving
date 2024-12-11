#include<bits/stdc++.h>
using namespace std;

int find_min_difference(int N, int K, vector<int>& A)
{
    sort(A.begin(), A.end());

    int min_difference = INT_MAX;


    for (int i = 0; i <= N - K; ++i)
    {
        int current_diff = A[i + (N - K) - 1] - A[i];
        min_difference = min(min_difference, current_diff);
    }

    return min_difference;
}

int main()
{
    int N, K;
    cin >> N >> K;

    vector<int> A(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }

    int result = find_min_difference(N, K, A);

    cout << result << endl;

    return 0;
}
