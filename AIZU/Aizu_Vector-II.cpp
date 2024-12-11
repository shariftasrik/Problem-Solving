#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin >> n >> q;

    vector<int> vec[n-1];
    for(int i=0; i<q; i++)
    {
        int typ;
        cin >> typ;

        if(typ == 0){
            int t,x;
            cin >> t >> x;
            vec[t].push_back(x);

        }else if(typ == 1){
            int t;
            cin >> t;

            for(int a : vec[t]){
                cout << a << " ";
            }
            cout << endl;

        }else{
            int t;
            cin >> t;

            vec[t].clear();
        }
    }
    return 0;
}
