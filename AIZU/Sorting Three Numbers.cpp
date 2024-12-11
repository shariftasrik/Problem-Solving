#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;

    if(a>b && a>c)
    {
        if(b>c) cout << c << " " << b << " " << a << endl;
        else cout << b << " " << c << " " << a << endl;
    }
    else if(b >a && b >c)
    {
        if(a>c) cout << c << " " << a << " " << b << endl;
        else cout << a << " " << c << " " << b <<endl;
    }
    else if(c >a && c>b)
    {
        if(a>b) cout << b << " " << a << " " << c << endl;
        else cout << a << " " << b << " " << c << endl;
    }



    return 0;
}








