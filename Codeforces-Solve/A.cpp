#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t-->0)
    {
        int n;
        cin >> n;

        int arr[n];
        int sum = 0;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        for(int i=0; i<n; i++)
        {
            if(arr[i]>0) sum += arr[i];
            else if(arr[i]<0)
            {
                sum = sum + ((-1)*arr[i]);
            }
        }
        cout << sum << endl;
    }
    return 0;
}
