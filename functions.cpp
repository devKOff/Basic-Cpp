#include <iostream>
#include <string>
using namespace std;

// here we are going to learn about function and learn some basic program

int add(int a, int b) {
    return a + b;
}
int sub(int a, int b) {
    return a - b;
}
int mul(int a, int b) {
    return a * b;
}
int dev(int a, int b) {
    return a/b;
}
int main() {
    int n1,n2;
    cout<<"Enter a number: ";
    cin>>n1;
    cout<<"Enter a number: ";
    cin>>n2;
    char fun;
    cout<<"Enter a function: ";
    cin>>fun;
    if (fun== '+') {
        cout<<add(n1,n2)<<endl;
    }
    else if (fun=='-') {
        cout<<sub(n1,n2)<<endl;
    }
    else if (fun=='*') {
        cout<<mul(n1,n2)<<endl;
    }
    else if (fun=='/') {
        cout<<dev(n1,n2)<<endl;
    }

}