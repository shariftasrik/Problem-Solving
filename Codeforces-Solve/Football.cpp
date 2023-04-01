#include<bits/stdc++.h>
#include<string>

using namespace std;

int main()
{
    string f;
    cin >> f;

    int count1=0,count2=0,z=0;


    for(int i=0 ; i< f.length();  i++)
    {
        if(f[i]=='1')
        {
            count1++;
            count2=0;
        }
        else if(f[i]=='0')
        {
            count2++;
            count1=0;
        }
        if(count1==7 || count2==7)
        {
            z=1;
        }
    }


    if(z==1) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
