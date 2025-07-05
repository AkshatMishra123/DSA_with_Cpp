#include<iostream>
using namespace std;

//
// 1. SINGLE INHERITANCE
//
class Person {
public:
    string name;
    void sayHello() {
        cout << "Hello, I am " << name << endl;
    }
};

class Student : public Person {
public:
    int rollNo;
    void display() {
        cout << "Roll No: " << rollNo << endl;
    }
};

//
// 2. MULTILEVEL INHERITANCE
//
class Animal {
public:
    void breathe() {
        cout << "Breathing..." << endl;
    }
};

class Mammal : public Animal {
public:
    void walk() {
        cout << "Walking..." << endl;
    }
};

class Dog : public Mammal {
public:
    void bark() {
        cout << "Barking..." << endl;
    }
};

//
// 3. MULTIPLE INHERITANCE
//
class Artist {
public:
    void draw() {
        cout << "Drawing artwork..." << endl;
    }
};

class Engineer {
public:
    void build() {
        cout << "Building something..." << endl;
    }
};

class CreativeEngineer : public Artist, public Engineer {
public:
    void think() {
        cout << "Thinking creatively!" << endl;
    }
};

//
// 4. HIERARCHICAL INHERITANCE
//
class Vehicle {
public:
    void start() {
        cout << "Vehicle started!" << endl;
    }
};

class Car : public Vehicle {
public:
    void openSunroof() {
        cout << "Opening sunroof..." << endl;
    }
};

class Bike : public Vehicle {
public:
    void doWheelie() {
        cout << "Doing a wheelie!" << endl;
    }
};

//
// 5. HYBRID INHERITANCE (Multiple + Hierarchical)
//
class A {
protected:
    int x;
public:
    void setX(int val) { x = val; }
};

class B : virtual public A {
public:
    void printB() { cout << "B class, x = " << x << endl; }
};

class C : virtual public A {
public:
    void printC() { cout << "C class, x = " << x << endl; }
};

class D : public B, public C {
public:
    void printD() { cout << "D class, x = " << x << endl; }
};

//
// MAIN FUNCTION TO TEST ALL INHERITANCE TYPES
//
int main() {
    cout << "----- Single Inheritance -----" << endl;
    Student s;
    s.name = "Akshat";
    s.rollNo = 21;
    s.sayHello();
    s.display();

    cout << "\n----- Multilevel Inheritance -----" << endl;
    Dog d;
    d.breathe();
    d.walk();
    d.bark();

    cout << "\n----- Multiple Inheritance -----" << endl;
    CreativeEngineer ce;
    ce.draw();
    ce.build();
    ce.think();

    cout << "\n----- Hierarchical Inheritance -----" << endl;
    Car c;
    c.start();
    c.openSunroof();

    Bike b;
    b.start();
    b.doWheelie();

    cout << "\n----- Hybrid Inheritance -----" << endl;
    D obj;
    obj.setX(100);
    obj.printB();
    obj.printC();
    obj.printD();

    return 0;
}
