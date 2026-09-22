// #include <iostream>
// using namespace std;
// class student{
// public:
//     string name ;
//     int age;
//     float gpa;

//     //constructor
//     student (){
//     cout << "Ai/ml\n";//self made constructor
//     name = "mahi";
//     age = 18;
//     gpa = 8.2;
// }
//     void display(){
//         cout << name <<endl;
//         cout << age << endl;
//         cout << gpa <<endl;
//     }
// };
// int main(){
//constructors
//same name as class
//it doesn't have a return type
//memory allocation happens when constructor is called
//A constructor is a special function inside a class that is automatically called when an object is created.
//constructor always declare as public as main function doesn't have aceess to private things
//two types of constructor
// student s1; // constructor call it is used for intializing object\
s1.display();

// ### C++ Constructor — Interview Summary

// A **constructor** is a special member function of a class that is automatically called when an object is created.
// Its main purpose is to **initialize the data members of an object**. A constructor has the 
//**same name as the class** and has **no return type, not even `void`**. Constructors can be
// **overloaded**, meaning a class can have multiple constructors with different parameter lists. 
//The main types are **default constructor** (takes no arguments), **parameterized constructor** 
//(takes arguments), and **copy constructor** (creates a new object by copying an existing object). 
//If we do not define any constructor, the compiler can provide a default constructor, but if we
// define a parameterized constructor, a no-argument constructor is not automatically provided. 
//A constructor **cannot be virtual or static**, because it is responsible for initializing an object before 
//normal object use. However, a constructor **can be private**, which can be used to control object creation.
// Constructors cannot return values and are normally invoked automatically during object creation rather than 
//being called like ordinary functions. A **copy constructor** generally has the form 
//`ClassName(const ClassName &obj)` and is used when creating a new object from an existing object. 
//Remember the important difference: `Student s2 = s1;` creates a new object and can invoke the copy
// constructor, while `s2 = s1;` assigns one already-existing object to another using the assignment operator.
// A constructor can also use an **initializer list**, such as `Student(int a) : age(a) {}`, which is
// especially important for initializing `const` members, reference members, and base classes. 
//In inheritance, constructors execute in the order **Base → Derived**, while destructors execute in the
// reverse order **Derived → Base**. A constructor is different from a normal function because it has no 
//return type, has the class name, is automatically called during object creation, and is primarily used 
//for initialization.

// ### Quick Interview Trick

// **Constructor = Same class name + No return type + Automatically called + Initializes object.**

// **Inheritance:** Constructor → `Base → Derived`
// **Destructor → `Derived → Base`
// **New object from old → Copy Constructor**
// **Existing object = existing object → Assignment Operator**


//     return 0;
// }

