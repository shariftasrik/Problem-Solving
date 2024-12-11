#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b;
    char x;
    while(x != '?')
    {
        cin >> a >> x >> b;

        if(a==0 && b==0 && x=='?') break;
        else if(x=='+') cout << a+b << endl;
        else if(x=='-') cout << a-b << endl;
        else if(x=='*') cout << a*b << endl;
        else if(x=='/' &&  b!=0) cout << a/b << endl;

    }



}
int main()
{
    solve();

    return 0;
}



