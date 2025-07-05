#include<iostream>
#include<string>
using namespace std;

class Teacher{

private:
    double salary;

public:
    //properties/ attributes
    string name;
    string dept;
    string subject;
    

    //methods/ member function-> becomes the member of class 
    void changeDept(string newDept){
        dept = newDept;
    }
    /*  getters and setters funcn are used inside the public access 
    modifier for controlled access to private 
    data members of a class*/

    //setter
    double setsalary(double s){
        salary = s;
    }
    //getter
    double getsalary(){
        return salary;
    }
};

int main(){
    //creating an object of class Teacher
    Teacher t1; /*"When we create an object, a constructor is called internally. If no constructor
                         is explicitly defined, the compiler provides 
                          a default constructor automaticall*/
    t1.name = "Akshat";
    t1.dept = "CSE";
    t1.subject = "Data Structures";
    // t1.salary = 50000;  "this would give an error as salary is in private"

    //since now we use setter inside public modifier we can set salary value despite it being iside private modifier
    t1.setsalary(50000);


    cout << t1.name << endl;
    cout << t1.getsalary() << endl;
    return 0;
}