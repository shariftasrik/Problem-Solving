#include<iostream>
using namespace std;


int getLenght(char name[]){
    int i,count=0;
    for(i=0; name[i] != '\0'; i++){
        count++;
    }

    return count;
}

char reverseString(char name[]){
    int i=0;
    
    for(i=getLenght(name); i>=0; i--){
            cout << name[i];
        } 
}

int main(){
    char name[20];
    cout << "Enter your name : ";
    cin >> name;
    cout << " Your name is : " << name << endl;

    cout << " Reverse of the String is : " ; 
    reverseString(name);

    return 0;
}