#include <iostream>
using namespace std;
#include <string>

int main() {
    int myNum = 5;               // 2 or 4 bytes
    float myFloatNum = 5.99;     // 4 bytes
    double myDoubleNum = 9.98;   // 8 bytes
    char myLetter = 'D';         // 1 byte
    bool myBoolean = true;       // 1 byte
    string myText = "Hello";  

    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName.append(lastName);
    cout << fullName;

    cout << "Type your full name: ";
    getline (cin, fullName);
    cout << "Your name is: " << fullName;



    cin >> myNum;
    cout << myNum << "\n";
    cout << myFloatNum << "\n";
    cout << myDoubleNum << "\n";
    cout << myLetter << "\n";
    cout << myBoolean << "\n";
    cout << myText << "\n";

    return 0;
}