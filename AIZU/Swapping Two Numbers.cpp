#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b;
    while(true)
    {
        cin >> a >> b;

        if(a==0 && b==0) break;
        else if(a>b) cout << b << " " << a << endl;
        else cout << a << " " << b << endl;
    }



}
int main()
{
    solve();

    return 0;
}


