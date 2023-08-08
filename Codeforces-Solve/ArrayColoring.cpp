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

        int a[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }

        int f=0;
        if(n==2)
        {
            if(a[0]%2==0 && a[1]%2==0 || a[0]%2!=0 && a[1]%2!=0)
                f++;
        }
        else
        {
            int s=0,t=0;

            t = t + a[0] + a[1];
            for(int i=2; i<n; i++)
            {
                s = s + a[i];
            }
            if(t%2==0 && s%2==0 || t%2!=0 && s%2!=0)
                f++;
        }
        if(f==1) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
    return 0;
}


