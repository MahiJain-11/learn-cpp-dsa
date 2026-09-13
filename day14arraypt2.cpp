#include <iostream>
using namespace std;
void reversearray(int arr[],int sz){
    int start = 0 ,end = sz-1;
    while (start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
//linear search
// int arr[7] = {3,2,5,6,9,10,4};
// int target ;
// cout << "ENTER THE NUMBER YOU WANT  " ;
// cin >> target;
// for(int i = 0 ; i <= 6 ; i++){
//     if(arr[i] == target){
//         cout <<"index of target number is " <<i;
//     }
// }
//reverse an array(2 pointer)
// int arr[7] = {3,2,5,6,9,10,4};
// int sz = 7;
// reversearray(arr,sz);
// for(int i = 0 ; i < sz ; i++){
//     cout << arr[i]<<" ";
// }
// cout << endl;
    return 0;
}