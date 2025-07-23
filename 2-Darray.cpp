#include <iostream>
#include <string>
using namespace std;

void inp(int mat[3][3]) {
    cout<<"Enter the elements in matrix :";
    for (int i =0 ; i<3 ; i++) {
        for (int j = 0 ; j<3 ; j++) {
            cin>>mat[i][j];
        }
    }

}
void display(int mat[3][3]) {
    cout << "The matrix is :" << endl;
    for (int i =0 ; i<3 ; i++) {
        for (int j =0 ; j<3 ; j++) {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

void digonal(int mat[3][3]) {
    int sumd=0;
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            if (x==y) {
                sumd+=mat[x][y];
            }
        }
    }
    cout<<"Sum of diagonal elements are : "<<sumd<<" ";
}
int sumrow(int mat[3][3]) {
    for (int x = 0; x < 3; x++) {
        int sumr=0;
        for (int y = 0; y < 3; y++) {
            for (int z = 0; z < 3; z++) {
                if (y==z) {
                    sumr+=mat[x][y];
                }
            }
        }cout<<"Sum of "<<x+1<<" row is : "<<sumr<<endl;
    }
}
int sumcol(int mat[3][3]) {
    for (int x = 0; x < 3; x++) {
        int sumc=0;
        for (int y = 0; y < 3; y++) {
            sumc+=mat[y][x];
        }
        cout<<"Sum of "<<x+1<<" column is : "<<sumc<<endl;
    }
}



int main() {
    int matrix[3][3];
    inp(matrix);
    cout<<endl;
    display(matrix);
    cout<<endl;
    digonal(matrix);
    cout<<endl;
    sumrow(matrix);
    cout<<endl;
    sumcol(matrix);


}