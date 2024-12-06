#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while(tc-->0)
    {
        int n;
        cin >> n;

        int A[n];
        for(int i=0; i<n; i++)
        {
            cin >> A[i];
        }

        for(int i=0; i<n; i++){
            if(A[i]!=A[i+1] && A[i+1]!=A[i+2]){
                cout << i+1+1 << endl;
                break;
            }else if(A[i]!=A[i+1] && A[i+1]==A[i+2]){
                cout << i+1 << endl;
                break;
            }
        }
    }
    return 0;
}
