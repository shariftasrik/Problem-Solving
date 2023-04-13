#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t ;

    while(t-->0)
    {
        string num;
        cin >> num ;

        reverse(num.begin(),num.end());
        //cout << num << endl;

        vector<int> ans;

        for(int i=0; i<num.size(); i++)
        {
           //ith index digit
           int d = num[i]-'0'; //ASCII to Integer convert

           if(d != 0)
            ans.push_back(d * pow(10,i));
           //cout << d * (10,i) << endl;
        }
        cout << ans.size() << endl;//print the size of the vector

        for(int i=0; i<ans.size(); i++)
            cout << ans[i] << " ";
    }
    cout << endl;
}
