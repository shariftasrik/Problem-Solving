#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    char ch[n];
    for(int i=0; i<n; i++)
    {
        cin >> ch[i];
    }
    int count = 0;
    for(int i=0; i<n-1; i++)
    {
        if(ch[i] == ch[i+1])
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
