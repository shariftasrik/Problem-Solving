#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while(tc-->0){
        int n,m;
        cin >> n;
        cin >> m;
        char ch[n];

        int cntA=0,cntB=0,cntC=0,cntD=0,cntE=0,cntF=0,cntG=0;

        for(int i=0; i<n; i++){
            cin >> ch[i];
        }

        for(int i=0; i<n; i++){
            if(ch[i] == 'A') cntA++;
            if(ch[i] == 'B') cntB++;
            if(ch[i] == 'C') cntC++;
            if(ch[i] == 'D') cntD++;
            if(ch[i] == 'E') cntE++;
            if(ch[i] == 'F') cntF++;
            if(ch[i] == 'G') cntG++;
            //cout << endl;
        }

        int cnt = 0;
        for(int i=1; i<=m; i++){
            if(cntA<m){
                cnt++;
                cntA++;
            }
            if(cntB<m){
                cnt++;
                cntB++;
            }
            if(cntC<m){
                cnt++;
                cntC++;
            }
            if(cntD<m){
                cnt++;
                cntD++;
            }
            if(cntE<m){
                cnt++;
                cntE++;
            }
            if(cntF<m){
                cnt++;
                cntF++;
            }
            if(cntG<m){
                cnt++;
                cntG++;
            }
            //cout << endl;
        }
        cout << cnt << endl;
    }
    return 0;
}
