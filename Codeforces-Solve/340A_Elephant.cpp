#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    int res=0;
    cin >> x;
    int a[]={5,4,3,2,1};
    for(int i=0; i<5;i++){
        res += x/a[i];
        x = x%a[i];
    }
    cout<<res<<endl;
    return 0;
    
}