#include <iostream>
#include <string>
using namespace std;



int main() {
    cout <<"Welcome to our Bank"<<endl;
    int pass= 1239;
    int npass;
    cout<<"Enter the password:"<<endl;
    cin>>npass;
    int n;
    int bb,lb;
    bb = 100000;
    if (pass==npass) {
        cout<<"You entered correctly!"<<endl;
        cout<<"____MENU____"<<endl;
        cout<<"1. Check Bank balance"<<endl;
        cout<<"2. Withdraw Money from the bank"<<endl;
        cout<<"3. Deposit Money in the bank"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choice:"<<endl;
        cin>>n;
        switch (n) {
            case 1:
                cout<<"Your bank balance is"<<bb<<endl;
                break;
            case 2:
                cout<<"Enter amount"<<endl;
                cin>>lb;
                if (lb>bb) {
                    cout<<"Your bank does not have the money"<<endl;

                }
                else {
                    cout<<"withdrawl compleated !!"<<endl;
                    cout<<"Current balance is : "<<bb-lb<<endl;

                }
                break;
            case 3: {
                    cout<<"Enter the amount you have to deposit : ";
                    cin>>lb;
                    cout<<"Current Balance : "<<bb+lb<<endl;
                }
                break;

            case 4: {
                    cout<<"Exit"<<endl;
                }
                break;
        }


    }
}
