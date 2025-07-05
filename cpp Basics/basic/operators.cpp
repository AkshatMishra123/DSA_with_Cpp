#include <iostream>
using namespace std;

int main() {
    int a = 11, b = 4;

    cout << "sum" <<(a+b) << endl;
    cout << "difference" <<(a-b) << endl;
    cout << "product" << (a*b) << endl;
    cout << "quotient" << (a/b) << endl;  // op= 2
    cout << "remainder" << (a%b) << endl;  // modulo = 0


    // lets use typecasting for getting decimal value

    cout << (5 / (float)2) << endl;

    //another way 
    int x = 5;
    float y= 2;
    cout << (x / y) << endl; 

    //Relational operator
    cout << (5 > 3) << endl; // true-> 1
    cout << (5 < 3) << endl; // false-> 0
    cout << (5==3) << endl; // false-> 0
    cout << (5 != 3) << endl; //true-> 1

    //logical operator
    // logical (OR -> || ; AND -> && ; NOT -> !)
    //NOT CONVERTS true to false and false to true
    cout << !(5 > 3) << endl;

    return 0;
    
    }