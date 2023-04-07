#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    long long i,j,n,l,f;
    cin>>n;

    getchar();
    while(n--)
    {

        getline(cin,s);

        l=s.length();
        stack<char>q;
        if(l%2!=0)
            cout<<"No"<<endl;

        else
        {
            f=0;

            for(i=0; i<l; i++)
            {
                if(s[i]=='('||s[i]=='[')
                {
                    q.push(s[i]);
                }
                else if(!q.empty()&&s[i]==')'&&q.top()=='(')
                {
                    q.pop();
                }
                else if(!q.empty()&&s[i]==']'&&q.top()=='[')
                {
                    q.pop();
                }
                else
                {
                    q.push(s[i]);
                }
            }

            if(q.empty())
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }

    return 0;
}

