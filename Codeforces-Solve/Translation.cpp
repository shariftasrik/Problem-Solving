#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;

    cin >> s;
    cin >> t;

    reverse(s.begin(),s.end());


    if(s==t)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;

}
