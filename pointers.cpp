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


    int num1 = 99;
    int *pkj = &num1;
    cout << "Address of num1: " << pkj << endl;
    cout << "Value of num1: " << num1 << endl;
    cout << "Address of pkj: " << &pkj << endl;
    cout << "Value of pkj: " << *pkj << endl;

    int arr[3]={75,27,93};
    int *ptrar = arr;
    cout << "Address of arr: " << ptrar << endl;
    cout << "Value of arr: " << *ptrar << endl;
    cout << "Address of arr: " << &arr << endl;
    ptrar++;
    cout << "Address of arr: " << ptrar << endl;
    cout << "Value of arr: " << *ptrar << endl;
    cout << "Address of arr: " << &arr << endl;
    ptrar++;
    cout << "Address of arr: " << ptrar << endl;
    cout << "Value of arr: " << *ptrar << endl;
    cout << "Address of arr: " << &arr << endl;


}
