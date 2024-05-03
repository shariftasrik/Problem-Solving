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

        vector<int> x(n-1);
        for(int i=0; i<n-1; i++)
        {
            cin >> x[i];
        }

        vector<int> arr(n);

        arr[0] = 501;

        for(int i=1; i<n; i++)
        {
            arr[i] = x[i-1] + arr[i-1];
            /*
            if(arr[i] > x[i])
            {
                arr[i] = x[i-1] + arr[i-1];
                //arr[i+1] = (arr[i] + x[i+1])%arr[i];
            }
            */

        }
        for(int i=0; i<n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;


    }
    return 0;
}

