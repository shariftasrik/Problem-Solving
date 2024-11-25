#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    char A,C,G,T;

    long long cntA=0, cntC=0, cntG=0, cntT=0;


    for(long long i=0; i<10e6; i++)
    {
        if(s[i]=='A' && s[i]==s[i+1])      cntA++;
        else if(s[i]=='C' && s[i]==s[i+1]) cntC++;
        else if(s[i]=='G' && s[i]==s[i+1]) cntG++;
        else if(s[i]=='T' && s[i]==s[i+1]) cntT++;
    }

    cntA = cntA+1;
    cntC = cntC+1;
    cntG = cntG+1;
    cntT = cntT+1;

    int MAX = max({cntA,cntC,cntG,cntT});
    cout << MAX << endl;
}
