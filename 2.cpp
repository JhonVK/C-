#include <iostream>
using namespace std;
#include <string>


class MyClass {        // The class
    public:              // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
    MyClass() {     // Constructor
      cout << "Constructor\n";
    }
    void myMethod() {  // Method/function defined inside the class
        cout << "Method";
    }
};

// Derived class
class MyClass2: public MyClass {
  public:
    string model = "class ";
};


int main() {
    MyClass myObj;     // Create an object of MyClass
    myObj.myMethod();  // Call the method
    return 0;
}