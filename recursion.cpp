#include <iostream>
using namespace std;


void facto(int n) {
    int fa=1;
    for (int i = n; i >0; i--) {
        fa=i*fa;
    }
    cout << fa << endl;
}

int main() {
    int a;
    cout<<"Enter the number for factorial: ";
    cin>>a;
    facto(a);
}