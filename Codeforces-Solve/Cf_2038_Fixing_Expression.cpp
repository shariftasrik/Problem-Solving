#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while(tc--)
    {
        string s;
        cin >> s;

        char a = s[0];
        char op = s[1];
        char b = s[2];

        if(a < b) cout << a << "<" << b << endl;
        else if(a == b) cout << a << "=" << b << endl;
        else if(a > b) cout << a << ">" << b << endl;
    }
    return 0;
}
