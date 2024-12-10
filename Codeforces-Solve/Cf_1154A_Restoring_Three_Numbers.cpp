#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    for(int i=0; i<4; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }

    sort(arr.begin(),arr.end());
    for(int i=0;i<3; i++){
        cout << arr[3] - arr[i] << " ";
    }
    cout << endl;
    return 0;

}
