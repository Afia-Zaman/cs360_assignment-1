// a. Question#1: Write a named string constant made up of your first and last
// names with a blank in between. Write the statements to print out the result of
// applying length and size to your named constant object. Compile and run
// your program.
// b.Question#2: Add statements to your Question#1 program to print your name
// formatted as last name first, followed by a comma and your first name. Use
// function substr to accomplish this task. Compile and run your program.
// c.Question#3: Add the statements necessary to print your last name, followed
// by a comma and your first initial. Compile and run your program.

// Answer:

#include <iostream> 
using std::cout, std::string; 

int main() {
    // Question#1
    const string full_name = "Afia Zaman";

    cout << "Full Name: " << full_name << std::endl;
    cout << "Length of Name: " << full_name.length() << std::endl; 

    // Question#2
    string last_name_first = full_name.substr(full_name.find(' ') + 1) + ", " + full_name.substr(0, full_name.find(' '));
    cout << "Formatted Name (Last Name First): " << last_name_first << std::endl;

    // Question#3
    string last_name_initial = full_name.substr(0, full_name.find(' ')) + ", " + full_name[full_name.find(' ') + 1] + ".";
    cout << "Last Name, First Initial: " << last_name_initial << std::endl;

    return 0;
}

//Output- Full Name: Afia Zaman
// Length of Name: 10
// Formatted Name (Last Name First): Zaman, Afia
// Last Name, First Initial: Afia, Z.
