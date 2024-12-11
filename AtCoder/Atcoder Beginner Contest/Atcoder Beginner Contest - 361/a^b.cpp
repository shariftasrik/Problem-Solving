#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
int main()
{
    int n;
    cin >> n;

    vector<ull> v;
    ull x,cnt=0;
    for(ull i=1; i<n; i++)
    {
        for(ull j=2; j*j<n; j++)
        {
            x = pow(i,j);


            if(x < n)
            {
                v.push_back(x);
            }
            else
                break;
        }
    }
    sort(v.begin(),v.end());
    auto it = unique(v.begin(),v.end());
    v.erase(it, v.end());

    for(auto& v : v)
    {
        cnt++;
    }
    cout << cnt << endl;
}
