#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,l,m,n,d;
    int count = 0;
    cin >> k >> l >> m >> n >> d;

    int arr[d];
    for(int i=0; i<d; i++)
    {
        if(d == 0)
            break;
        if((i+1)%k==0 || (i+1)%l==0 || (i+1)%m==0 || (i+1)%n==0)
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
