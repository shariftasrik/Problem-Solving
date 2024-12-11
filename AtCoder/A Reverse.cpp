#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l,r;
    string s;
    cin >> l >> r;
    cin >> s;

    int m = l-1;
    int n = r-1;

    while(m<n)
    {
        swap(s[m],s[n]);
        m++;
        n--;
    }
    cout << s << endl;

}
