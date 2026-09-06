#include <iostream>
using namespace std;
//Q1 
// int sumofdigits(int num){
//     int digsum = 0;
//     while (num >0){
//        int  lastdig = num %10;
//        num = num /10;
//        digsum = digsum +lastdig;

//     }
//     return digsum;

// }
//  Q2 nCr
// int factorial(int n) {
//     int fact = 1;

//     for (int i = 1; i <= n; i++) {
//         fact = fact * i;
//     }

//     return fact;
// }

// int nCr(int n, int r) {
//     return factorial(n) / (factorial(r) * factorial(n - r));
// }

// Q3 prime or not
// void  isprime (int n){
//     for(int i = 2 ; i <= n ; i++){
//     if (n % i == 0){
//         cout << "NOT PRIME";
//         break;
//     }
//     else {
//         cout << "PRIME";
//         break;
//     }
//     }
// }

//Q4 print prime number
void printprime(int n){
    for(int i = 2 ; i <=n ; i++){
    int num =0;
    
    for(int j = 1; j<=i ; j++){
        if(i%j==0){
            num++;
        }
    }
    if(num == 2){
        cout << i <<" ";
    }
    
    }
}
int main (){
//stack = stores data ---> static allocation
// it is store  on top of one another ...LIFO last in first out 
// heap  ---> dynamic allocation ---> stores data in random way
// pass by value --->  copy of argument to function
// QUESTION 1 calculate sum of digits of a number
// cout << "SUM IS = " << sumofdigits(99)<<endl;

//calculate nCr binomial coefficient for n and r
//   int n, r;

//     cout << "Enter n and r: ";
//     cin >> n >> r;

//     cout << "nCr = " << nCr(n, r);

//WAF to check if number is prime or not 
// int n;
// cout << "enter n"<<"\n";
// cin >> n;
// isprime(n);

//WAF to print all prime number from 2 TO N
int n;
cout <<"ENTER N ";
cin >> n;
printprime(n);
    return 0;
}