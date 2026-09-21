#include <iostream>
using namespace std;
class teacher {
    public:
    string name;
    string subject;
    int salary ;
    int age;

};
// class teacher{
// private:
// int salary;// jo chiz private hojati we can't access it like salary is private so error ajyega salary pr
// public:
//     string name;
//     string subject;
//     int age;
// };    
int main(){
//acess modifier 
//private ----> data and methods accessible inside class
//public ---> data and methods accesible to everyone
// protected ---> data and method accessible inside class and to it's derived class
teacher t1 ;
t1.name = "mahi";
t1.subject = "science";
t1.salary = 250000;
t1.age = 20;
cout<<t1.name<<endl;
cout<<t1.subject<<endl;
cout<<t1.salary<<endl;
cout << t1.age <<endl;
    return 0;
}