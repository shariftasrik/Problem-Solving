#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    long long cnt = 0;

    for(long long i=1; i<n; i++)
    {
        if(arr[i-1]>arr[i]){
            cnt+= (arr[i-1]-arr[i]);
            //cout << arr[i] << endl;
            arr[i] = arr[i-1];
        }
        //cout << endl;
    }
    cout << cnt << endl;
    return 0;
}

