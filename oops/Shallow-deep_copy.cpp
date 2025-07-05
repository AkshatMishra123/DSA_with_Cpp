#include<iostream>
#include<cstring>
using namespace std;

class Teacher {
    char* name;

public:
    // Parameterized Constructor
    Teacher(const char* n) {
        name = new char[strlen(n) + 1]; // +1 for null terminator
        strcpy(name, n);
        cout << "✅ Parameterized constructor called" << endl;
    }

    // Shallow Copy Constructor (default one, dangerous)
    // Teacher(const Teacher& t) {
    //     name = t.name; // just copies pointer (shallow)
    // }

    // ✅ Deep Copy Constructor
    Teacher(const Teacher& t) {
        name = new char[strlen(t.name) + 1];
        strcpy(name, t.name);
        cout << "✅ Deep copy constructor called" << endl;
    }

    void setName(const char* newName) {
        strcpy(name, newName); // modifies the actual memory
    }

    void display() const {
        cout << "Name: " << name << endl;
    }

    // Destructor to release memory
    ~Teacher() {
        delete[] name;
        cout << "🧹 Destructor called" << endl;
    }
};

int main() {
    Teacher t1("Akshat");     // Calls parameterized constructor
    Teacher t2 = t1;          // Calls deep copy constructor

    cout << "\n--- Before modification ---\n";
    t1.display();
    t2.display();

    t1.setName("Vikash");     // If shallow copy, this affects both objects!

    cout << "\n--- After modifying t1 ---\n";
    t1.display();
    t2.display();             // Should remain unchanged if deep copy is correct

    return 0;
}
