#include <iostream>
using namespace std;
class students{
    public:
        string name;
        string subject;
        int age;
        //non parameterised ways
        students(){
            name = "mahi jain";
        }

        //parameterised way
        students(string name ,string subject, int age){
           this-> name = name; //when class name and intialization is same we can vary them by using this->
           this-> subject = subject;//if we don't vary like this it will come error
           this-> age = age;
        }
    void getInfo(){
        cout <<"name: "<<name<<endl;
        cout<<"subject: "<<subject <<endl;
    }
};
int main (){
//this pointer
// students s1;
// s1.name = "khushi";
// s1.subject = "english";
// s1.age = 19;
// cout << s1.name<< " "<< s1.subject <<" "<< s1.age << endl;

//copy constructor
//it is a special constructor that is used to copy properties of one object to another
// students s1("mahi jain","science",18);
// // s1.getInfo();
// students s2(s1);
// s2.getInfo();
return 0;
}