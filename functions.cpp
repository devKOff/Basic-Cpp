#include <iostream>
#include <string>
using namespace std;

// here we are going to learn about function and learn some basic program
/*
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
*/

//here we have a basic function overloading example
/*
void gre(string a,string b,int tim) {
    cout<<"Good morning "<<a<<" and "<<b<<" It is "<<tim<<"O'clock."<<endl;

}

int main() {
    string p1,p2;
    int time;
    cout<<"Please enter your name:";
    cin>>p1;
    cout<<"Please enter your partner's name:";
    cin>>p2;
    cout <<"Please enter your time:";
    cin>>time;
    gre(p1,p2,time);

}
*/
// last pro tip for project
/*
void area(int width, int height) {
    cout << "Area is " << width * height << endl;
}
void area(float width, float height) {
    cout << "Area is " << width * height << endl;

}
void area(double rad) {
    cout << "Area is " << 3.14*rad << endl;
}
int main() {
    int w = 5, h = 10;
    float wf = 4.5, hf = 3.5;
    double r = 2.5;
    area(w, h);
    area(wf, hf);
    area(r);


}

*/
// default arguments - when we do not assign value to the function

void greet(string name = "Guest",int t = 4) {
    cout<<"Good morning "<<name<<" your departure is at "<<t<<" O'clock."<<endl;

}
int main() {
    greet();
    greet("Dev");
    greet("Raj",12);
}