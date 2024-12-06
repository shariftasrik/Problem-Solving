#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while(tc-->0){
        int n;
        cin >> n;

        int A[n];

        vector<bool> used(n,false);

        for(int i=0; i<n; i++){
            cin >> A[i];
        }

        int score = 0;

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(A[i] == A[j] && !used[i] && !used[j]){
                    score++;
                    used[i] = true;
                    used[j] = true;
                }
            }
        }
        cout << score << endl;
    }

    return 0;
}
