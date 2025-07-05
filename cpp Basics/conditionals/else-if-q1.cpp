//Find character lowerase or uppercase
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    if(ch >= 'a' && ch <= 'z'){
        cout<<"Lowercase character";
    } else {
        cout<<"Uppercase character";
    }

    // Method 2 ASCII
    cout<<"\nEnter a character: ";
    cin>>ch;
    if(ch >= 65 && ch <= 90){
        cout<<"UPPERCASE character";
    } else {
        cout<<"lowercase character";
    }

    return 0;
}