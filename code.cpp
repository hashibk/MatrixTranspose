#include <iostream>
using namespace std;

template <typename T>
class Matrix{
    int rows;
    int cols;
    T **matrix;

    public:
    Matrix(int r, int c){                            //parameterised constructor
        rows=r;
        cols=c;
        matrix=new T *[r];
        for (int i=0;i<r;i++){
            matrix[i]=new T[c];
        }
    }

    Matrix (Matrix &m): rows(m.rows), cols(m.cols){  //copy constructor
        matrix=new T *[rows];
        for (int i=0;i<rows;i++){
            matrix[i]=new T[cols];
            for (int j = 0; j < cols; j++) {
                matrix[i][j] = m.matrix[i][j];
            }
        }
    }

    void insertElement (T val, int r, int c){
        matrix[r][c]=val;
    }

    void print(){
        for (int i=0;i<rows;i++){
            for (int j=0;j<cols;j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }

    void transpose(){
        int temp=rows;
        rows=cols;
        cols=temp;
    }

    ~Matrix() {
        for (int i = 0; i < rows; i++) {
            delete[] matrix[i];
        }
        delete[] matrix;
    }

};

int main(){
    Matrix<int> m(3,4);
}