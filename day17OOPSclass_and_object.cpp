#include <iostream>
using namespace std;
// Class
//A class is a blueprint or template that defines what data an object stores and what operations it can perform.
// Here, Student is a class. It contains:
// Data members: name, age ,gpa , rno etc.  
class Student{
public:    
    string name;
    int rno;
    float gpa;
    int age;
};
int main(){
// Object
// An object is an instance of a class. After defining the class, we create objects from it.
//here x1, x2 are object
    Student x1;
    x1.name = "Mahi";
    x1.rno = 102;
    x1.gpa = 9.3;
    cout << x1.name << endl;
    cout << x1.rno << endl;
    cout << x1.gpa << endl;
    cout <<"enter your age  " << endl;
    cin>> x1.age;

    Student x2;
    x2.name = "aryan";
    x2.rno = 90;
    x2.gpa = 9.8;
    cout << x2.name << endl;
    cout << x2.rno << endl;
    cout << x2.gpa << endl;
    cout <<"enter your age  " << endl;
    cin>> x2.age;

    return 0;
}