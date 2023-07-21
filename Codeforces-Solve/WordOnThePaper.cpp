#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t-- > 0)
    {
        int i,j;
        char a[8][8];
        string word = "";

        for(i=0; i<8; i++)
        {
            for(j=0; j<8; j++)
            {
                cin >> a[i][j];
            }
        }
        for(i=0; i<8; i++)
        {
            for(j=0; j<8; j++)
            {
                if(a[i][j] != '.')
                    word += a[i][j];
            }
        }
        cout << word << endl;
    }
    return 0;
}
