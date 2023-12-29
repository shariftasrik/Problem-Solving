#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t-->0)
    {
        int a,b,c;
        cin >> a >> b >> c;

        if(a == b) cout << c << endl;
        if(b == c) cout << a << endl;
        if(a == c) cout << b << endl;
    }
    return 0;
}
