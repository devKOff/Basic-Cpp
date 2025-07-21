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
/*
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
*/
int count(int n) {
    if (n == 0) return 0;
    int qu = n/10;
    int rem = n%10;
    if (rem == 0) {
        return 1+count(qu);
    }
    else {
        return count(qu);
    }
}

int main() {
    int num;
    cout <<"Enter the number : ";
    cin>>num;
    cout<< "The numbers are "<<count(num);

}