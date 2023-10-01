/// Leetcode Problem
///  415. Add String (without using builtin library)

#include <bits/stdc++.h>
using namespace std;

string addStrings(string num1, string num2){
    string sum;

    int n = max(num1.size(),num2.size()), res = 0;
    reverse(num1.begin(),num1.end());
    reverse(num2.begin(),num2.end());

    for(int i=0; i<n; i++){
        if(i>=num1.size()) res += num2[i]-'0';
        else if(i>=num2.size()) res += num1[i]-'0';
        else res += (num1[i]-'0')+(num2[i]-'0');

        sum += res%10 + '0';
        res = res/10; 
    }
    if(res){
        sum += res + '0'; 
    }

    reverse(sum.begin(),sum.end());

    return sum;
}

int main(){
    string n1,n2;
    cout << "Enter the first string  : " << endl;
    cin >> n1 ;
    cout << "Enter the second string : " << endl;
    cin >> n2;

    cout <<"The additional value of the strings are : "<<addStrings(n1,n2);

    return 0;
}