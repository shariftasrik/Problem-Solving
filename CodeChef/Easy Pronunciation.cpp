#include <bits/stdc++.h>
using namespace std;


int main() {

    unsigned int t;
    cin >> t;

    while(t--) {

        unsigned int N;
        cin >> N;
        string S;
        cin >> S;
        unsigned int cCnt = 0, shift = 0;

        for(int i = 0; i < N; i++) {

            char ch = S[i];
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {

                cCnt = 0;
                continue;
            }

            else {

                cCnt++;
                if(cCnt >= 4) {

                    shift = 1;
                    break;
                }
            }
        }

        if(!shift)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
