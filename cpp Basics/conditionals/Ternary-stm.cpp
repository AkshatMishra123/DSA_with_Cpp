/*
a ternary statement (or conditional operator) provides a concise way to write simple if-else conditions
condition ? expression1 : expression2;
*/
#include <iostream>
using namespace std;

int main() {
    int age = 18;
    cout << (age >= 18 ? "You are an adult" : "You are a minor") << endl;

    return 0;
}
