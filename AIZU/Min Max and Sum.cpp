#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    long long arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    long long sum = 0;
    long long minn = arr[0];
    long long maxx = arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i] < minn)
        {
            minn = arr[i];
        }
        if(arr[i] > maxx)
        {
            maxx = arr[i];
        }
        sum += arr[i];
    }

    cout << minn << " " << maxx << " " << sum << endl;
}
int main()
{
    solve();

    return 0;
}




