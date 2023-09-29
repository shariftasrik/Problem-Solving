#include <iostream>
using namespace std;

bool isVowel(char ch)
{
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
}

string reverseVowel(string s)
{
    int st = 0;
    int e = s.size() - 1;

    while (st < e)
    {
        if(isVowel(s[st]) && isVowel(s[e])){
            swap(s[st], s[e]);
            st++;
            e--;
        }else if(!isVowel(s[st])){
            st++;
        }else if(!isVowel(s[e])){
            e--;
        }
    }
    return s;
}

int main()
{
    string s;
    cout << "Enter the main String : ";
    cin >> s;

    cout << "After reversing the vowels of the main string : " << reverseVowel(s) << endl;
    return 0;
}