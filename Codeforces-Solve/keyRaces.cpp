#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s, v1,v2,t1,t2;
    cin >> s >> v1 >> v2 >> t1 >> t2;

    int t_time1 = v1*s + 2*t1;
    int t_time2 =v2*s + 2*t2;

    if(t_time1 == t_time2)
        cout << "Friendship" << endl;

    else
        printf(t_time1 < t_time2 ? "First\n" : "Second\n");

    return 0;
}

