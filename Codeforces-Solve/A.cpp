#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    int a,b,c;
    char o;
    cin >> t;
    while(t-->0)
    {
        cin >> a >> b >> c;
        if(a+b==c) cout << "+" << endl;
        else cout << "-" << endl;

    }
    return 0;

}
