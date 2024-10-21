// a. Question#1: Add the statements necessary to print the following strings
// centered in fields of 20 characters, all on one line: "Good Morning", "Sarah",
// and "Sunshine!". Do not use manipulators. Compile and run your program;
// show your output.
// b. Question#2: Repeat Question#1using manipulators to help center your strings.
// Compile and run your program. Your output should be the same.
// c. Question#3: Change the program in Question#2 so that the three strings are
// printed on three separate lines with a blank line in between each string.

// Answer:

#include <iostream>
#include <iomanip>
#include <string>
using std::cout;
using std::setw;
using std::left;
using std::setfill;
using std::string;

int main() {
    // Question#1
    const string str1 = "Good Morning";
    const string str2 = "Sarah";
    const string str3 = "Sunshine!";
    
    // Calculate the spacing needed for centering
    int spacing1 = (20 - str1.length()) / 2;
    int spacing2 = (20 - str2.length()) / 2;
    int spacing3 = (20 - str3.length()) / 2;

    // Print the centered strings on one line
    cout << "Question#1: " << "\n" << string(spacing1, ' ') << str1 << string(spacing1, ' ')
         << string(spacing2, ' ') << str2 << string(spacing2, ' ')
         << string(spacing3, ' ') << str3 << string(spacing3, ' ') << "\n\n";


    // Question#2
   // Using Manipulators
    cout << "Question#2: " << "\n" << left << setw(20) << setfill(' ') << str1
         << setw(20) << setfill(' ') << str2
         << setw(20) << setfill(' ') << str3 << "\n\n";


    // Question#3
    // Using Manipulators
    cout << "Question#3: " << "\n";
    cout << left << setw(20) << setfill(' ') << str1 << "\n\n";
    cout << left << setw(20) << setfill(' ') << str2 << "\n\n";
    cout << left << setw(20) << setfill(' ') << str3 << "\n";

    return 0;
}

// Output - 
// Question#1: 
//    Good Morning           Sarah            Sunshine!     

// Question#2: 
// Good Morning        Sarah               Sunshine!           

// Question#3: 
// Good Morning        

// Sarah               

// Sunshine! 
