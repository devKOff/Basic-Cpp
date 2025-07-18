#include <iostream>
#include <string>
using namespace std;
// This program is to understand basic use of RELATIONAL OPERATORS.
int main() {
    int age1;
    int age2;
    cout <<"Enter the age of first person : ";
    cin >> age1;
    cout <<"Enter the age of second person : ";
    cin >> age2;
    if (age1>age2) {
        cout << "Person 1 is older then Person 2";

    }
    else if (age1<age2) {
        cout << "Person 2 is older then Person 1";

    }
    else {
        cout <<"Both are of same age.";
    }


    return 0;
}
