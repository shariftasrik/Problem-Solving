#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t-->0)
    {
        string s;
        int count1=0,count2=0;
        for(int i=0; i<5; i++)
        {
            cin >> s[i];
        }
        for(int i=0; i<5; i++)
        {
            if(s[i]=='A') count1++;
            if(s[i]=='B') count2++;
        }
        if(count1>count2) cout << "A" << endl;
        else cout << "B" << endl;
    }
    return 0;
}

