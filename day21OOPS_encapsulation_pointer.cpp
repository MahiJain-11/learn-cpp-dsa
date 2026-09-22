// #include <iostream>
// using namespace std;
// class teacher {
//     public:
//     string name;
//     string dept;
//     string subject;
//     int salary ;
//     int age;

//     //member functions/methods ---> function of class
//     void changeDept(string newDept){
//         dept = newDept;
//     }
// };

// int main (){
// //encapsulation is the wrapping up of data and member functions in a single unit called class
// // teacher t1 ;
// // t1.name = "mahi";
// // t1.subject = "science";
// // t1.salary = 250000;
// // t1.age = 20;
// // cout<<t1.name<<endl;
// // cout<<t1.subject<<endl;
// // cout<<t1.salary<<endl;
// // cout << t1.age <<endl;


// //this pointer
// The **`this` pointer** is a special pointer available inside every **non-static 
//member function** of a class. It stores the **address of the current object**, meaning it points 
//to the object that is currently calling the member function. We use `this` mainly when a data member 
//and a function parameter have the **same name**, to differentiate between them. For example,
// `Student(int age) { this->age = age; }` means the `age` on the left is the object's data member, 
//while the `age` on the right is the parameter. `this` can also be used to access the current 
//object's members, such as `this->name`, and it can be used to return the current object using `
//return *this;`, which is useful for method chaining. The `this` pointer is automatically available inside 
//non-static member functions and **cannot be used directly inside a static member function**, because
// a static function is not associated with a particular object. Also, `this` itself cannot be modified 
//to point to another object. In simple words, **`this` means "the address of the current object."**

// ### Example

// ```cpp
// class Student {
//     int age;

// public:
//     Student(int age) {
//         this->age = age;
//     }

//     void show() {
//         cout << this->age;
//     }
// };

// int main() {
//     Student s(18);
//     s.show();
// }
// ```

// Here, when `s.show()` is called, `this` points to object `s`.

// ### 🔥 Tricky Interview Questions

// **Q. What does `this` contain?**
// It contains the **address of the current object**.

// **Q. Why do we use `this->age = age`?**
// Because both the data member and parameter are named `age`. `this->age` refers to the object's data 
//member, while `age` refers to the parameter.

// **Q. Can `this` be used in a static function?**
// **No**, because static functions do not belong to a particular object and therefore
// have no current object.

// **Q. Can we change the `this` pointer?**
// No. We cannot make `this` point to another object.

// **Q. Is `this` available in every member function?**
// It is available in **non-static member functions**. It is not available in static member functions.

// **Q. What is the simplest definition of `this` pointer?**

// > "`this` is a pointer that stores the address of the current object."

// ### 🧠 Quick Trick

// **`this` = "Current Object"**

// `this->x` → **current object's `x`**
// `this` → **address of current object**
// `*this` → **current object*



//     return 0;
// }