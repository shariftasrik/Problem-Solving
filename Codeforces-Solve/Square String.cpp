#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    string s;
    int h,i;

    while(t-->0)
    {
        cin >> s;
        if(s.size()%2)
        {
            cout << "NO" << endl;
            continue;
        }
        h=s.size()/2;

        bool square(true);
        for(i=0; i<h; i++)
        {
            if(s[i]!=s[h+i])
            {
                square=false;
                break;
            }
        }
        cout << (square? "YES" : "NO") << endl;

    }
}
