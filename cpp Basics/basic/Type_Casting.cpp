#include <iostream>
using namespace std;

int main(){
    char grade = 'A';
    int value = grade;    // implicit conversion  = small to big
    cout << value <<endl; //grade is implicitly converted to an int, printing its ASCII value (65 for 'A').
    

    double price = 100.65;
    int newPrice = (int)price;  
    cout << newPrice << endl;  //price is explicitly cast to an int, truncating the decimal part and printing 100.
    return 0;

}