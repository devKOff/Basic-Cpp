#include <iostream>
#include <string>
using namespace std;

int main() {
    int mak[10];
    for (int j = 0; j < 10; j++) {
        cout << "Enter number : ";
        cin>>mak[j];

    }


    cout <<"The even numbers are : ";
    for(int i=0;i<10;i++) {
        if (mak[i]%2==0) {
            cout<<mak[i]<<" ";
        }
    }

    int hi=mak[0];
    cout <<"\n The greatest number is : ";
    for (int i=0; i<10; i++) {
        if (mak[i] > hi) {
            hi = mak[i];
        }
    }
    cout <<hi<<endl;

    int lo = mak[0];
    cout <<"The smallest number is : ";
    for (int i=0; i<10; i++) {
        if (mak[i] < lo) {
            lo = mak[i];
        }
    }
    cout <<lo<<endl;

    int count=0;

    cout <<"The total even no. are : ";
    for (int i=0; i<10; i++) {
        if (mak[i]%2==0) {
            count++;
        }
    }
    cout <<count<<endl;

    int od=10-count;
    cout <<"The total odd number are : "<<od<<endl;

    int sum = 0;
    cout <<"The sum of all numbers are : ";
    for (int i=0; i<10; i++) {
        sum+=mak[i];
    }
    cout <<sum<<endl;
    cout <<"The average of all numbers are : "<<(float)sum/10<<endl;



}