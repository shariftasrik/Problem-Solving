#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    cout << max(10ll, ((n + k - 1) / k )* 5) << endl;
    return 0;
}
