#include <iostream>
using namespace std;
//Q1 
int sumofdigits(int num){
    int digsum = 0;
    while (num >0){
       int  lastdig = num %10;
       num = num /10;
       digsum = digsum +lastdig;

    }
    return digsum;

}
// nCr
int factorial(int n) {
    int fact = 1;

    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}

int nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}
int main (){
//stack = stores data ---> static allocation
// it is store  on top of one another ...LIFO last in first out 
// heap  ---> dynamic allocation ---> stores data in random way
// pass by value --->  copy of argument to function
// QUESTION 1 calculate sum of digits of a number
// cout << "SUM IS = " << sumofdigits(99)<<endl;

//calculate nCr binomial coefficient for n and r
  int n, r;

    cout << "Enter n and r: ";
    cin >> n >> r;

    cout << "nCr = " << nCr(n, r);
    return 0;
}