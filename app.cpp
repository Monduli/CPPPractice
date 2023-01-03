#include <iostream>
using namespace std;

int main() {
    // Prints Hello World
    cout << "Hello World! \n";

    // Prints I am learning C++ after the newline from the previous line.
    cout << "I am learning C++. \n";

    int num;
    num = 15;

    const int myNum = 15;
    cout << myNum << "\n";

    double myFloat = 5.99;
    char myLetter = 'D';
    string myText = "Hello";
    bool myBoolean = true;

    cout << "I am " << myNum << " years old. \n";

    int x = 5, y = 6, z = 50;
    cout << x + y + z << "\n";
    x = y = z = 50;
    cout << x + y + z << "\n";

    //string input;
    //cout << "Type something. \n";
    //cin >> input;
    //cout << "You typed: " << input;
    return 0;
}