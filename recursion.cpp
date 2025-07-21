#include <iostream>
using namespace std;

/*
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
*/
/*
void pr(int start,int end) {
    if (start>end) return;
    cout << start << " ";
    pr(start+1,end);
}
int main() {
    int x;
    cout<<"Enter the number: ";
    cin>>x;
    pr(1,x);
}
*/

int soa(int n) {
    if (n==0)return 1;
    int l=n%10;
    int m=n/10;
    cout<<l<<" ";
    return l + soa(m);
}
int main() {
    int x;
    cout<<"Enter the number : ";
    cin>>x;
    int result = soa(x);
    cout << "\nSum of digits: " << result << endl;
}