#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n,count=0;
        cin >> n;

        string p;
        cin >> p;

        for(int i=0; i<n; i++)
        {
            if(p[i]=='@')
                count++;
            else if(p[i]=='@' && p[i+1]=='*')
                count++;
            else if(p[i]=='@' && p[i+1]=='*' && p[i+2]=='*')
                break;
            else if(p[i]=='*' && p[i+1]=='*')
                break;
        }


        cout << count << endl;
    }

    return 0;
}
