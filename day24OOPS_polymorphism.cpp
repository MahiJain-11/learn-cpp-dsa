#include <iostream>
using namespace std;
//CTP function overloading
class calculator{
public:
    int add(int a,int b){
        return a+b;
    }   

    int add(int a, int b, int c){
    return a+b+c;
    }
};
int main(){
//polymorphism
//Polymorphism means "many forms."
//n C++, polymorphism means the same function/operator can behave differently 
//in different situations.
//two type of polymorphism

//compile - time polymorphism (CTP)
//The decision about which function to execute is made during compilation.
// it is mainly achived through two ways :-
//1) function overloading
//Here add() has two forms: compiler decides which to call seeing the declaration
// calculator c;
// cout<< c.add(11,24,18)<<endl;
// cout << c.add(11,24)<<endl;

//operator overloading
   return 0;
}