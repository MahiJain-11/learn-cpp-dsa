#include <iostream>
#include <vector>
using namespace std;

int main(){
    //vectors
// vector<int>vec={1,2,3} ;  
// cout << vec[1] <<endl;

// vector<int>vec(3,1); // first value is size and second value is value inside index
// cout << vec[0]<<endl;
// cout << vec[1]<<endl;
// cout << vec[2]<<endl;
vector<int>vec(3,1); 
for(int i : vec) {
    cout << i << endl;
}
   return 0;
}