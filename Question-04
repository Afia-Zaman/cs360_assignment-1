// Question#1: Write a program to print the following numbers right-justified in
// a column on the screen. Make the values named constants.
// 1066 1492 512 1 -23
// b. Question#2: Add two statements to your program. Calculate the floating-
// point result from dividing the sum of the first two values by the sum of the
// last three values and store it in answer. The second statement should write the
// contents of answer on the screen to four decimal places. (Do not forget to
// declare answer.)
// The answer is _______________.
// c. Question#3: Write the following numbers right-justified in a column on the
// screen. Each of the data values should be written in formatted floating-point
// notation with two decimal places. Use field width specifications rather than
// listing the numbers in your program with the proper formatting. You may use
// either literal constants or named constants.
// 23.62 46.0 43.4443 100.1 98.98
// d. Question#4: Add two statements to your program for Question#3. The first
// statement should calculate the sum of the numbers and store the result in
// variable sum. The second statement should write sum on the screen, properly labeled.

// Answer:

#include <iostream> 
#include <iomanip>
using std::cout, std::fixed, std::setprecision;

int main(){

    // Question#1
    const int num1 = 1066; 
    const int num2 = 1492; 
    const int num3 = 512; 
    const int num4 = 1; 
    const int num5 = -23;

    cout << "Question#1: "<< std::endl;
    cout << std::setw(6) << num1 << std::endl;
    cout << std::setw(6) << num2 << std::endl;
    cout << std::setw(6) << num3 << std::endl;
    cout << std::setw(6) << num4 << std::endl;
    cout << std::setw(6) << num5 << std::endl;
    cout << std::endl;

    // Question#2
    double answer = static_cast<double>(num1 + num2) / static_cast<double>(num1+num2+num3);
    cout << std::fixed << std::setprecision(4);
    cout << "Question#2: " << std::endl;
    cout << "The answer is: " << answer << std::endl; 
    cout << std::endl;

    // Question#3
    const double num6 = 23.62;
    const double num7 = 46.0;
    const double num8 = 43.4443;
    const double num9 = 100.1;
    const double num10 = 98.98;

    cout << "Question#3: " << std::endl;
    cout << std::setw(8) << std::fixed << std::setprecision(2) << num6 << std::endl;
    cout << std::setw(8) << num7 << std::endl;
    cout << std::setw(8) << num8 << std::endl;
    cout << std::setw(8) << num9 << std::endl;
    cout << std::setw(8) << num10 << std::endl;
    cout << std::endl;

    // Question#4
    double sum = (num6 + num7 + num8 + num9 + num10);
    cout << "Question#4: " << std::endl;
    cout << "The sum of the numbers is: " << sum << std::endl;
    return 0;
}

// Output- Question#1: 
//  1066
//  1492
//   512
//     1
//   -23

// Question#2: 
// The answer is: 0.8332

// Question#3: 
//   23.62
//   46.00
//   43.44
//  100.10
//   98.98

// Question#4: 
// The sum of the numbers is: 312.14

