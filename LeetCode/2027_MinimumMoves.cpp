#include<bits/stdc++.h>
using namespace std;

int minimumMoves(string s){
    int p=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='X'){ p++;
        if(i>=s.size()) break;
        i += 2;
        }
    }
    return p;
}
int main(){
    string s;
    cin >> s;
    cout<<minimumMoves(s);

    return 0;
}