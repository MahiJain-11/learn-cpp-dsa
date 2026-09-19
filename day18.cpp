#include <iostream>
using namespace std;
class student{
public:
    string name ;
    int age;
    float gpa;

    //constructor
    student (){
    name = "mahi";
    age = 18;
    gpa = 8.2;
}
    void display(){
        cout << name <<endl;
        cout << age << endl;
        cout << gpa <<endl;
    }
};
int main(){
//constructors
//A constructor is a special function inside a class that is automatically called when an object is created.
// student s1;
// s1.display();

//this keyword

    return 0;
}

