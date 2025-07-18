#include <iostream>
#include <string>
using namespace std;
// This program is to understand conditional statements(if,else,switch)
int main() {
    int age1;
    cout << "Enter your age: ";
    cin >> age1;
    if (age1>=18) {
        cout<<"Your age if above 18 years so, you can use this calculater"<<endl;
        int x,y;
        cout<<"Enter the value of x and y."<<endl;
        cin>>x>>y;
        cout<<"your numbers are "<<x<<" and "<<y<<endl;
        int a;
        cout<<"Enter 1 for sum 1 for sub and 3 for mul"<<endl;

        cout<<"enter your choice : ";
        cin>>a;
        cout<<"your choice is "<<a<<endl;
        int add = x+y;
        int sub = x-y;
        int mul = x*y;
        switch (a) {

            case 1:
                cout<<"Your sum is "<<add<<endl;
                break;
            case 2:
                cout<<"Your sub is "<<sub<<endl;
                break;
            case 3:
                cout<<"Your mul is "<<mul<<endl;
                break;

        }

    }
    else {
        cout<<"You are not old enough to use the calculator.";

    }


    return 0;
}
