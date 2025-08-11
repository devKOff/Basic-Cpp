#include <iostream>
#include <string>
using namespace std;

int main() {
    string name ;
    getline(cin, name);
    cout<<name<<endl;

    string s1 = "Hello";
    string s2 = "World";
    string s3 = s1 + " " + s2;
    string s4 = s3.substr(0,3);
    cout<<s4<<endl;

    string s5 = "HEllo world , I love chicken";
    cout<<"The size of the string 5 is "<<s5.length()<<endl;
    cout<<"The size of the string 5 is "<<s5.size()<<endl;

    string strsen1;
    getline(cin, strsen1);
    cout << strsen1 << endl;
    string found;
    getline(cin, found);

    size_t pos1 = strsen1.find(found);
    if (pos1 != string::npos) {
        cout << "First occurrence at position: " << pos1 << endl;
    } else {
        cout << "Not found" << endl;
    }
    size_t pos2 = strsen1.rfind(found);
    if (pos2 != string::npos) {
        cout << "Last occurrence at position: " << pos2 << endl;
    } else {
        cout << "Not found" << endl;
    }
    strsen1.replace(pos2, found.size(), "");
    cout << strsen1 << endl;

    // after this i willshow how to use comparec and other command


    string sentence1;
    getline(cin, sentence1);
    cout << sentence1;
    string sentence2;
    getline(cin, sentence2);
    cout << sentence2;
    cout<<sentence1.compare(sentence2);
    //Returns 0 → strings are equal

    //Returns < 0 → str1 is smaller than str2

    //Returns > 0 → str1 is greater than str2



    // now we will convert string into int or other data type.
    int num = 40;
    string s = to_string(num);
    cout << s << endl;

    int sto = stoi(s);
    cout << sto + 10 << endl;
}
