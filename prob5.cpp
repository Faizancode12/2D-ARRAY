#include <iostream>
using namespace std;

const int COLS = 5;

void largestColumnFirst(int M[][COLS], int rows)
{
    int maxSum = -1;
    int maxColIndex = 0;
    for (int c = 0; c < COLS; c++) {
        int sum = 0;
        for (int r = 0; r < rows; r++) {
            sum += M[r][c];
        }

        if (sum > maxSum) {
            maxSum = sum;
            maxColIndex = c;
        }
    }
    for (int r = 0; r < rows; r++) {
        int temp = M[r][0];
        M[r][0] = M[r][maxColIndex];
        M[r][maxColIndex] = temp;
    }
}
void printMatrix(int M[][COLS], int rows)
{
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < COLS; c++) {
            cout << M[r][c] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    int rows = 4;
    int M[4][5] = {
        {3, 8, 1, 4, 7},
        {2, 9, 6, 5, 1},
        {8, 3, 2, 6, 4},
        {5, 1, 7, 9, 3}
    };

    cout << "Original Matrix:\n";
    printMatrix(M, rows);

    largestColumnFirst(M, rows);

    cout << "\nMatrix After Switching Largest Column With First:\n";
    printMatrix(M, rows);

    return 0;
}
