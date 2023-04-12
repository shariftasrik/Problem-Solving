#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t ;
    while(t-->0)
    {
        string s1,s2;
        cin >> s1 >> s2 ;

        set<char> st;
        for(auto x:s1)
            st.insert(x);
        for(auto x:s2)
            st.insert(x);

            cout << st.size()-1 << endl;
    }


    return 0;
}
