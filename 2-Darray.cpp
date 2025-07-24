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
void sumrow(int mat[3][3]) {
    for (int x = 0; x < 3; x++) {
        int sumr=0;
        for (int y = 0; y < 3; y++) {
            sumr+=mat[x][y];
        }cout<<"Sum of "<<x+1<<" row is : "<<sumr<<endl;
    }
}
void sumcol(int mat[3][3]) {
    for (int x = 0; x < 3; x++) {
        int sumc=0;
        for (int y = 0; y < 3; y++) {
            sumc+=mat[y][x];
        }
        cout<<"Sum of "<<x+1<<" column is : "<<sumc<<endl;
    }
}
void transpose(int mat[3][3]) {
    cout<<"Transpose of matrix is :"<<endl;
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            cout<<mat[y][x]<<" ";
        }
        cout<<endl;
    }
}
void matrixmultiply(int mat1[3][3],int mat2[3][3]) {
    cout<<"Matrix multiplication is :"<<endl;
    int res[3][3];
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            res[x][y] = 0;
            for (int z = 0; z < 3; z++) {
                res[x][y] += mat1[x][z] * mat2[z][y];
            }cout<<res[x][y]<<" ";
        }cout<<endl;
    }
}
void matrixadd(int mat1[3][3],int mat2[3][3]) {
    cout<<"Matrix addition is :"<<endl;
    int res[3][3];
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            res[x][y]=mat1[x][y]+mat2[x][y];
            cout<<res[x][y]<<" ";
        }
        cout<<endl;
    }
}

void matrixsub(int mat1[3][3],int mat2[3][3]) {
    cout<<"Matrix subtraction is :"<<endl;
    int res[3][3];
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            res[x][y]=mat1[x][y]-mat2[x][y];
            cout<<res[x][y]<<" ";
        }
        cout<<endl;
    }
}

void symmetric(int mat1[3][3]) {
    int mat2[3][3];
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            mat1[y][x]=mat2[x][y];
        }
        cout<<endl;
    }
    for (int i =0 ; i<3 ; i++) {
        for (int j =0 ; j<3 ; j++) {
            if (mat1[i][j]==mat2[i][j]) {
                cout<<"The matrix is symmetric ."<<endl;
            }
            else cout<<"The matrix is NOT symmetric ."<<endl;
        }
        cout<<endl;
    }



}




int main() {
    int matrix1[3][3];
    int matrix2[3][3];


    inp(matrix1);
    cout<<endl;
    inp(matrix2);
    cout<<endl;
    display(matrix1);
    cout<<endl;
    display(matrix2);
    cout<<endl;
    /*
    display(matrix);
    cout<<endl;
    digonal(matrix);
    cout<<endl;
    sumcol(matrix);
    cout<<endl;
    sumrow(matrix);
    cout<<endl;

    transpose(matrix1);
    */
    matrixmultiply(matrix1,matrix2);




}