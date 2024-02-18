#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t-->0)
    {
        int n;
        cin >> n;

        string mins = "zzz" , cur;

        for(int i=0;i<26; i++)
        {
            for(int j=0; j<26; j++)
            {
                for(int k=0; k<26; k++)
                {
                    if(i+j+k+3 == n)
                    {
                        cur += char(i+'a');
                        cur += char(j+'a');
                        cur += char(k+'a');
                        mins = min(cur,mins);
                    }
                }
            }
        }
        cout << mins << endl;
    }



    return 0;
}
