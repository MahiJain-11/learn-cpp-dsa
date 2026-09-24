#include <iostream>
using namespace std;
// class animal{
// public:
//     void eat(){
//         cout<<"animal eats "<<endl;
//     }

// };
// class dog : public animal{//inhertance
// public:
//     void bark(){
//         cout<<"dog barks "<<endl;
//     }
// };
// class puppy : public dog{
// public:
//     void baby(){
//         cout<<"dog's baby "<<endl;
//     }
// };

//multiple inheritance
// class father{
// public: 
//     void work(){
//         cout<< "father works "<< endl;
//     }    
// };
// class mother{
// public:
//     void cook(){
//         cout<< "mother cooks "<<endl;
//     }    
// };
// class child : public father, public mother{
// public:
//     void play(){
//         cout << "child plays "<<endl;
//     }    
// };

//hierarchial inheritance
class Animal {
public:
    void eat() {
        cout << "Animal eats" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void meow() {
        cout << "Cat meows" << endl;
    }
};
int main(){
//destructor
// it deallocates the memory 
//c++ automatically by default make destructor
//inheritance
//It is an OOP concept in which a new class (derived/child class) acquires the properties
// and functions of an existing class (base/parent class).
// dog d;
// d.eat();// this is single inheritance example
// d.bark();

//types of inheritance
//single inheritance 
//one base class---> one derived class

//multilevel inheritance
//A → B → C
// puppy p;
// p.eat();// this is multilevel  inheritance example
// p.bark();
// p.baby();

// multiple inheritance
//Multiple base classes → One derived class
// child c;
// c.work();
// c.cook();
// c.play();
//Here Child inherits from both Father and Mother.

//hierarchial inheritance
//One base class → Multiple derived classes
// Dog d;
// Cat c;
//     d.eat();
//     d.bark();
//     c.eat();
//     c.meow();

//hybrid inheritance

    return 0;
}