#include <iostream>
using namespace std;

 void printhello(){
    cout << "HELLO MAHI\n";
 }
    
 int printmahi(){
    cout << "HELLO MAHI\n";
    return 3;
}
//sum of two numbers
int sum(int a , int b){
    int s = a+b;
    return s;
}

//minimum of two numbers
int minOftwo(int a , int b){
    if(a>b){
        return b;
    }
    else {
        return a;
    }
}

int main (){
// printhello();
// printhello();
// printhello();

// int value = printmahi();
// cout << " value = "<< value << endl;

// cout << sum(99,1)<< endl;
// redendency --->  unnecesary repeatation of code

// cout<<" minimum of two number is :  "<< minOftwo(102837339 , 134848483)<<endl;

    return 0 ;
}