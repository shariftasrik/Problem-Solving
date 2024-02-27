#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t-->0)
    {
        ll n;
        cin >> n;
        ll count1=0; ///for '0'
        ll count2=0; ///for '1'

        string s;

        cin >> s;


        for(ll i=0; i<n; i++)
        {
            if(s[i]=='0') count1++;

        }
        if(count1>0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    //cout << "count 2 :" << count2 << endl;
    //cout << "count 1 :" << count1 << endl;


    return 0;
}
