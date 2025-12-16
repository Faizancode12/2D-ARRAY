#include <iostream>
using namespace std;

const int COLS = 3;

void printSum(int arr[][COLS], int rows) {
    int sum = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < COLS; j++) {
            sum += arr[i][j];
        }
    }
    cout << "\nThe sum of elements in the matrix is: " << sum << endl;
}
int main() {
    int rows;

    cout << "Enter row size: ";
    cin >> rows;

    int matrix[rows][COLS];

    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    printSum(matrix, rows);

    return 0;
}
