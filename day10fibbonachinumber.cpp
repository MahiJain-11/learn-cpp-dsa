#include <iostream>
using namespace std;

int main (){
//fibonacchi number
//The Fibonacci sequence is a series of numbers where each number is the sum of the two preceding numbers.
int n;
cout << "ENTER N : ";
cin >> n;
int a = 0;
int b = 1;
for (int i = 0 ; i <n ; i++){
    int c = a+b;
    a=b;
    b=c;
cout << a <<" ";
}
    return 0;
}