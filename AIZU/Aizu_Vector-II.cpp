#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin >> n >> q;

    vector<int> A[n];
    for(int i=0; i<q; i++)
    {
        int typ;
        cin >> typ;

        if(typ == 0){
            int t,x;
            cin >> t >> x;
            A[t].push_back(x);

        }else if(typ == 1){
            int t;
            cin >> t;
            for(int j=0; j<A[t].size(); j++){
                cout << A[t][j];
                if(j != A[t].size()-1){
                    cout <<" ";
                }
            }
            cout << endl;

        }else{
            int t;
            cin >> t;

            A[t].clear();
        }
    }
    return 0;
}
