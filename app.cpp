#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int loop = 1;
    string c;
    while (loop != 0) {
        loop = 0;
        cout << "Type '1' for the first set of tutorial prints. (Basic outputs to math functions)\n";
        cout << "Type '2' for the second set of tutorial prints. (Switches and loops)\n";
        cout << "Type '0' for a description of this project. (About)\n";
        cout << "Type anything other than 0, 1, or 2 to quit.\n";
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
            cout << myLetter << " is a letter.\n";
            cout << myFloat << " is a floating point number.\n";
            cout << myText << " is a string.\n";
            cout << myBoolean << " is a boolean value.\n";

            // adding variables. also adding \n to the end to escape lines despite string/int mix
            int x = 5, y = 6, z = 50;
            cout << x + y + z << "\n";
            x = y = z = 50;
            cout << x + y + z << "\n";

            // cin is "c input" and cout is "c output" (might stand for something else)
            string input;
            cout << "Type something. \n";
            getline(cin, input);
            cout << "You typed: " << input << "\n";

            // .size() returns length of string
            cout << "The length of your input was: " << input.size() << "\n";
            cout << input[0] << "\n";

            // Note for cin (not getline()):
            // Typing something with a space causes it to only repeat back everything previous to the space
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

            // cmath commands
            // abs, acos, asin, atan, cbrt, ceil, cos, cosh, exp, expm1, fabs, fdmi, floor, hypot, fma, fmax, fmin, fmod, pow, sin, sinh, tan, tanh
            cout << max(5, 10) << "\n";
            cout << min(5, 10) << "\n";
            cout << sqrt(64) << "\n";
            cout << round(2.6) << "\n";
            cout << log(2) << "\n";

            // loop back to main menu
            loop = 1;
            cout << "Type anything to confirm you have read this about and are ready to return to the main menu.\n";
            getline(cin, c);

        } else if (choice == "2") {
            int time = 20;
            string result = (time < 18) ? "Good day.\n" : "Good evening.\n";

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

            // while loops work like they do in Java / Python
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

            // regular for loop
            for (int i = 0; i < 5; i++) {
                cout << "I have run this loop " << i << " times.\n";
            }

            // for looping through an array is easier with a colon
            int myNumbers[5] = {10, 20, 30, 40, 50};
            for (int i : myNumbers) {
                cout << i << "\n";
            }

            // loop back to main menu
            loop = 1;
            cout << "Type anything to confirm you have read this about and are ready to return to the main menu.\n";
            getline(cin, c);

        } else if (choice == "0") {
            cout << "This is a practice C++ program. \n";
            cout << "I will turn this into a proper C++ program that performs a function as I become\n";
            cout << "more familiar with the language.\n";
            cout << "- Monduli, 2023 \n";
            loop = 1;

            cout << "Type anything to confirm you have read this about and are ready to return to the main menu.\n";
            getline(cin, c);
        } else {
            cout << "Goodbye.\n";
        }
    }
    return 0;
}