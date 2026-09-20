#include <iostream>
using namespace std;
class cricketer{
    public:
    string name;
    int runs;

    cricketer (string n, int r){//jo andar likh rhe ho that should be not sme as bahar wla 
        
        name = n;
        runs = r;
    }
};
int main(){
    // cricketer c1;
    // c1.name = "virat kohli";
    // c1.runs = 2500;
    // cout << c1.runs <<endl;
    cricketer c1 ("Virat kohli ",2500);
    cricketer c2 ("rohit sharma ",2400);
    cout << c1.name << " "<< c1.runs <<endl;
    cout << c2.name <<" "<<c2.runs << endl;

    return 0;
}