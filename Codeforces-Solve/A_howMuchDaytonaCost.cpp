#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t-->0)
    {
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        int flag = 0;
        for(int i=0; i<n; i++)
        {
            if(a[i] == k)
            {
                flag = 1;
                break;
            }
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
