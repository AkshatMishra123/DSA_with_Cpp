#include<iostream>
#include<string>
using namespace std;

class Teacher {
public:
    string name;
    string dept;
    string subject;
    double salary;

    // 1️⃣ Default Constructor (also called Non-Parameterized Constructor)
    Teacher() {
        name = "Unknown";
        dept = "None";
        subject = "None";
        salary = 0.0;
        cout << "✅ Default constructor called!" << endl;
    }

    // 2️⃣ Parameterized Constructor
    Teacher(string n, string d, string s, double sal) {
        name = n;
        dept = d;
        subject = s;
        salary = sal;
        cout << "✅ Parameterized constructor called!" << endl;
    }

    // 3️⃣ Copy Constructor
    Teacher(const Teacher& other) {
        name = other.name;
        dept = other.dept;
        subject = other.subject;
        salary = other.salary;
        cout << "✅ Copy constructor called!" << endl;
    }

    // Method to display teacher details
    void display() {
        cout << "Name: " << name << endl;
        cout << "Department: " << dept << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    // 🧪 Using Default Constructor
    Teacher t1;
    t1.display();

    cout << "--------------------------" << endl;

    // 🧪 Using Parameterized Constructor
    Teacher t2("Akshat", "CSE", "Data Structures", 50000);
    t2.display();

    cout << "--------------------------" << endl;

    // 🧪 Using Copy Constructor
    Teacher t3 = t2; // or: Teacher t3(t2);
    t3.display();

    return 0;
}
