#include <iostream>
using namespace std;

int main() {
    int num = 33;
    int *ptr = &num;

    char f = 'p';
    char *cptr = &f;

    float cgpa = 8.000293;
    float *cg = &cgpa;

    // Address and Value using pointers
    cout << "Address of num: " << ptr << endl;
    cout << "Value of num (direct): " << num << endl;
    cout << "Value of num (via pointer): " << *ptr << endl;

    cout << "Address of f: " << (void*)cptr << endl;  // avoid printing as string
    cout << "Value of f (direct): " << f << endl;
    cout << "Value of f (via pointer): " << *cptr << endl;

    cout << "Address of cgpa: " << cg << endl;
    cout << "Value of cgpa (direct): " << cgpa << endl;
    cout << "Value of cgpa (via pointer): " << *cg << endl;

    return 0;
}
