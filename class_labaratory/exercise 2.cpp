#include <iostream>

using namespace std;

void MatInput(int* mat, int rows, int cols) {
    cout << "Enter elements for a " << rows << "x" << cols << " matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> mat[i * cols + j];
        }
    }
}

void MatAdd(int* mat1, int* mat2, int* matSum, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matSum[i * cols + j] = mat1[i * cols + j] + mat2[i * cols + j];
        }
    }
}

void MatDisplay(int* mat, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << mat[i * cols + j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int row, col;
    cout << "Enter the size of the matrix (row col): ";
    cin >> row >> col;

    int* mat1 = new int[row * col];
    int* mat2 = new int[row * col];
    int* matAdd = new int[row * col];

    // Input for the first matrix
    MatInput(mat1, row, col);

    // Input for the second matrix
    MatInput(mat2, row, col);

    // Perform matrix addition
    MatAdd(mat1, mat2, matAdd, row, col);

    cout << "Sum of two matrices:\n";
    MatDisplay(matAdd, row, col);

    // Free the allocated memory
    delete[] mat1;
    delete[] mat2;
    delete[] matAdd;

    return 0;
}
