#include <iostream>
using namespace std;

class Matrix {
private:
    int rows, cols, data[10][10];

public:
    Matrix(int r, int c) {
        rows = r;
        cols = c;
        for(int i = 0; i < rows; i++)
            for(int j = 0; j < cols; j++)
                data[i][j] = 0;
    }

    void setElement(int i, int j, int value) {
        data[i][j] = value;
    }

    int getRows() {
        return rows;
    }

    int getCols() {
        return cols;
    }

    Matrix add(Matrix m) {
        Matrix result(rows, cols);
        for(int i = 0; i < rows; i++)
            for(int j = 0; j < cols; j++)
                result.data[i][j] = data[i][j] + m.data[i][j];
        return result;
    }

    Matrix multiply(Matrix m) {
        Matrix result(rows, m.cols);
        for(int i = 0; i < rows; i++)
            for(int j = 0; j < m.cols; j++)
                for(int k = 0; k < cols; k++)
                    result.data[i][j] += data[i][k] * m.data[k][j];
        return result;
    }

    void display() {
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++)
                cout << data[i][j] << " ";
            cout << endl;
        }
    }
};

int main() {
    Matrix m1(2, 2);
    Matrix m2(2, 2);

    m1.setElement(0, 0, 1);
    m1.setElement(0, 1, 2);
    m1.setElement(1, 0, 3);
    m1.setElement(1, 1, 4);

    m2.setElement(0, 0, 5);
    m2.setElement(0, 1, 6);
    m2.setElement(1, 0, 7);
    m2.setElement(1, 1, 8);

    Matrix sum = m1.add(m2);
    Matrix product = m1.multiply(m2);

    cout << "Matrix Addition:\n";
    sum.display();

    cout << "\nMatrix Multiplication:\n";
    product.display();

    return 0;
}
