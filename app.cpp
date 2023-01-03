#include <iostream>
using namespace std;

int main() {
    // Prints Hello World
    cout << "Hello World! \n";

    // Prints I am learning C++ after the newline from the previous line.
    cout << "I am learning C++. \n";

    // int are numbers as they are in other languages
    int num;
    num = 15;

    // const means it won't change
    const int myNum = 15;
    cout << myNum << "\n";

    // double are ^-1 decimal numbers
    double myFloat = 5.99;
    // char is single character
    char myLetter = 'D';
    // string is multiple characters
    string myText = "Hello";
    // boolean is true/false like other languages
    bool myBoolean = true;

    // using << multiple times allows for subbing in variables
    cout << "I am " << myNum << " years old. \n";

    // adding variables. also adding \n to the end to escape lines despite string/int mix
    int x = 5, y = 6, z = 50;
    cout << x + y + z << "\n";
    x = y = z = 50;
    cout << x + y + z << "\n";

    // cin is "c input" and cout is "c output" (might stand for something else)
    string input;
    cout << "Type something. \n";
    cin >> input;
    cout << "You typed: " << input;
    // Note that typing something with a space causes it to only repeat back everything previous to the space
    // I typed "bing bing" and it only returned "bing"
    return 0;
}