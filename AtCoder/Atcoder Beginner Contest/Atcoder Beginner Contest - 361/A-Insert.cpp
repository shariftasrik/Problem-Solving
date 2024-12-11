#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,x;
    cin >> n >> k >> x;

    int a[n],b[n+1];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    for(int i=0; i<n+1; i++)
    {
        if(i < k)
        {
            b[i] = a[i];
        }

        if(i == k)
        {
            b[i] = x;
        }

        if(i>k)
        {
            b[i] = a[i-1];
        }

    }
    for(int i=0; i<n+1; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;

    return 0;
}
