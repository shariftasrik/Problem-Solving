#include<bits/stdc++.h>
using namespace std;

bool isVowel(char ch)
{
    switch(ch){
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            return true;
        default:
            return false;    

    }
}

string sortVowels(string s)
{
    ///store vowels
    vector<char> vow;
    for(char ch : s){
        if(isVowel(ch)){
            vow.push_back(ch);
        }
    }

    ///sorting the vowels
    sort(vow.begin(),vow.end());

    ///update the string by sorting
    for(int i=0,j=0; i<s.size();i++){
        if(isVowel(s[i])){
            s[i] = vow[j] ;
            j++ ;
        }
    }
    return s;
}

int main()
{
    string s1;
    cout << "Enter the main String : ";
    cin >> s1;

    cout << "After sorting the vowels of the main string : " << sortVowels(s1) << endl;
    return 0;

}