#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    cout << "Make your choice.";
    string choice;
    getline(cin, choice);
    if (choice == "1") {
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
        getline(cin, input);
        cout << "You typed: " << input;
        // Note that typing something with a space causes it to only repeat back everything previous to the space
        // I typed "bing bing" and it only returned "bing"

        // && = and, || = or, ! = not
        bool a = true;
        bool b = false;
        cout << a && b;
        cout << "\n";
        cout << a || b; 
        cout << "\n";
        cout << !a && b;
        cout << "\n";

        // .size() returns length of string
        cout << "The length of your input was: " << input.size() << "\n";
        cout << input[0];

        // cmath commands
        // abs, acos, asin, atan, cbrt, ceil, cos, cosh, exp, expm1, fabs, fdmi, floor, hypot, fma, fmax, fmin, fmod, pow, sin, sinh, tan, tanh
        cout << max(5, 10);
        cout << min(5, 10);
        cout << sqrt(64);
        cout << round(2.6);
        cout << log(2);
    } else if (choice == "2") {
        int time = 20;
        string result = (time < 18) ? "Good day." : "Good evening.";

        // switch requires a break at the end of the case to end that line or it will continue
        switch(time) {
            case 20:
                cout << "Time is equal to 20.\n";
                break;
            case 30:
                cout << "Time is equal to 30.\n";
                break;
            default:
                cout << "Time is not equal to 20 or 30.\n";
                break;
        }

        int v = 0;

        while(v != 5) {
            cout << v << "\n";
            v += 1;
        }

        // does the thing once, then does it more times if while statement still true
        do {
            cout << v << "\n";
            v += 1;
        }
        while (v != 10);

        for (int i = 0; i < 5; i++) {
            cout << "I have run this loop " << i << " times.\n";
        }

        int myNumbers[5] = {10, 20, 30, 40, 50};
        for (int i : myNumbers) {
            cout << i << "\n";
        }

    } else {
        cout << "You chose something other than '1' or '2'. Goodbye.\n";
    }

    return 0;
}