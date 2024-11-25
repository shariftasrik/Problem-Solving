#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr;
    for(int i=0; i<n-1; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(),arr.end());
    /*
    for(int i=0; i<n-1; i++)
    {
        cout << arr[i] << " ";
    }
    */
    int ans;
    for(int i=0; i<n; i++)
    {
        if(i+1 != arr[i])
        {
            ans = i+1;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
