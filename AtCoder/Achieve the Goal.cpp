#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,m;
    cin >> n >> k >> m;

    int arr[n];
    for(int i=0; i<n-1; i++)
    {
        cin >> arr[i];
    }

    int a,sum = 0,need = 0;
    for(int i=0; i<n-1; i++)
    {
        sum = sum + arr[i];


    }

    need = (m*n)-sum;

    if(need < 0)
    {
        need = 0;
    }
    if(need > k)
    {
        need = -1;
    }

    if(sum==0)
    {
        need = -1;
    }
    cout << need << " " ;

    return 0;
}
