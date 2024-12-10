#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while(tc-->0)
    {
        int n,k;
        cin >> n >> k;

        int In_gold=0, Out_gold = 0;;

        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        for(int i=0; i<n; i++){
            if(arr[i] >= k){
                In_gold += arr[i];
            }else if(arr[i]==0 && In_gold>0){
                Out_gold++;
                In_gold--;
            }
        }
        cout << Out_gold << endl;
    }
    return 0;
}
