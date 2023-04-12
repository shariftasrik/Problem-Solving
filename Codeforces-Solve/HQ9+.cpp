#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;

    int count1=0;
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]=='H' || a[i]=='Q' || a[i]=='9')
            count1++;
    }

    if(count1==0) cout <<"NO" <<endl;
    else cout<< "YES" << endl;

    return 0;
}
