#include <iostream>
#include <string>
using namespace std;

int main() {
    string name ;
    getline(cin, name);
    cout<<name<<endl;

    string s1 = "Hello";
    string s2 = "World";
    string s3 = s1 + " " + s2;
    string s4 = s3.substr(0,3);
    cout<<s4<<endl;
}
