#include <bits/stdc++.h> // Includes all standard C++ libraries,
//providing access to STL components like iostream, vector, algorithm, etc.

using namespace std; // Brings the entire std namespace into scope,
//allowing use of standard library components
//(e.g., cout, cin) without std:: prefix.

// Function to print a specific message to the console
void print() {
    cout << "Great wall Mewar."; // Outputs the string
    //"Great wall Mewar." to the console without a newline
}

// Function to compute the sum of two integers
int Sum(int a, int b) {
    return a + b; // Returns the sum of parameters a and b
}

// Main function: Entry point of the program
int main() {
    print(); // Calls the print function to output "Great wall Mewar."
    cout << Sum(3, 6); // Calls Sum with arguments 3 and 6,
    //outputs the result (9) to the console
    return 0; // Indicates successful program termination
}