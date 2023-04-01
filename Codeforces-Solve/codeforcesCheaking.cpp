#include<bits/stdc++.h>
using namespace std;

int main()
{
    char cf[]="codeforces";
    char ch;
    int i,t;

    cin >> t;

    while(t-->0)
    {
        cin >> ch;
        int count=0;

        for(i=0;i<strlen(cf);i++)
        {
            if(cf[i]==ch)
                {
                    count++;
                    break;
                }
        }
        if(count!=0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
