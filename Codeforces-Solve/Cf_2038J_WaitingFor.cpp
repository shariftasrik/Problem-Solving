#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    int P=0,B=0;
    while(tc--)
    {
        char x;
        cin >> x;

        int n;
        cin >> n;


        if(x == 'P'){
            P = P + n;
            //cout << "P : " << P  << endl;
        }

        if(x == 'B'){
            B += n;
            //cout << "B : " << B  << endl;
            if(B > P){
               cout << "YES" << endl;
               P = 0;
               B = 0;
            }else if(P > B){
                cout << "NO" << endl;
                P = P - B;
                B = 0;
            }else{
                cout << "NO" << endl;
                P = 0;
                B = 0;
            }
        }

    }
    return 0;
}
