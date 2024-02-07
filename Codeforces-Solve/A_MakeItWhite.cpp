#include<bits/stdc++.h>
using namespace std;

int count_indexes(const vector<char>& vec) {
    int count = 0;
    int firstIndex = -1;
    int lastIndex = -1;

    for (size_t i = 0; i < vec.size(); ++i) {
        if (vec[i] == 'B') {
            firstIndex = i;
            break;
        }
    }

    for (int i = vec.size() - 1; i >= 0; --i) {
        if (vec[i] == 'B') {
            lastIndex = i;
            break;
        }
    }

    if (firstIndex != -1 && lastIndex != -1) {
        if (firstIndex == lastIndex) {
            count = 1;
        } else {
            for (int i = firstIndex; i <= lastIndex; ++i) {
                count++;
            }
        }
    }

    return count;
}

int main()
{
    int t;
    cin >> t;
    while(t-->0)
    {
        int n;
        cin >> n;

        vector<char> s;
        for(int i=0; i<n; i++)
        {
            char x;
            cin >> x;
            s.push_back(x);
        }
        int result = count_indexes(s);
        cout <<result << endl;
    }

    return 0;
}
