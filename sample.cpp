#include <iostream>
#include <string>
using namespace std;

/*
int main() {
    int x,y;
    cout<<"Enter the number : ";
    cin>>x;
    cout<<"For what length the number : ";
    cin>>y;
    for (int i = 1; i <= y; i++) {
        cout<<x<<"*"<<i<<"="<<i*x<<endl;

    }
}
*/
// this is a problem related to nested loop
/*
int main() {
    int n;
    cout << "Enter the number of users: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout<<"*";
        }
        cout<<endl;


    }
}
*/

// this code is for making a simple program with the use of break,continue and nested loop.

int main() {

    int x,num;
    int j=0;
    cout<<"Enter the end range of numbers: ";
    cin>>x;
    cout<<"Enter how many numbers you need : ";
    cin>>num;
    cout <<"The numbers are : ";
    for (int i = 1; i <= x; i++) {
        if (i%4==0) {
            cout<<i<<" ";
            j++;
            if (j==num) {
                break;
            }

        }
    }
}