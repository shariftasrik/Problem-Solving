#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,k;
    cin >> a >> b >> k;

    while(k>=1)
    {
        if(a!=0)
        {
            a = a - 1;
        }

        else if(a==0 && b!=0)
        {
            b = b - 1;
        }
        else
        {
            a = 0;
            b = 0;
        }

    }
    cout << a << " " << b << endl;
    return 0;
}
