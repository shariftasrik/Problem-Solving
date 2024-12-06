#include<bits/stdc++.h>
using namespace std;

int main()
{
    string num;
    cin >> num;

    for(int i=0; i<num.size(); i++){
        if(num[i]>='5' && num[i]<='9'){
            if(i == 0 && num[i] == '9') continue;

            int digit = num[i] - '0';
            digit = 9 - digit;
            num[i] = digit + '0';
        }
    }

    for(int i=0; i<num.size(); i++){
        cout << num[i];
    }
    cout << endl;
    return 0;
}
