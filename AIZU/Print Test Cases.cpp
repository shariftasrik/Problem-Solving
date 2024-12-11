#include<bits/stdc++.h>
using namespace std;

void solve()
{
    vector<int> v;
    for(int i=0; i<10000; i++)
    {
        int x;
        cin >> x;
        if(x != 0)
        {
           v.push_back(x);
        }
        else
        {
            break;
        }

    }

    for(int i=0; i<v.size(); i++)
    {
        cout << "Case " << i+1 << ": " << v[i] <<endl;
    }

}
    int main()
    {
        solve();

        return 0;
    }

