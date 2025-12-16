#include <iostream>
using namespace std;

const int COLS = 3;
int countIdenticalArrays(int arr[][COLS], int rows)
{
    int count = 0;

    // Compare each row with every next row
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < rows; j++) {

            bool same = true;

            // Check all 3 columns
            for (int c = 0; c < COLS; c++) {
                if (arr[i][c] != arr[j][c]) {
                    same = false;
                    break;
                }
            }

            if (same)
                count++;
        }
    }

    return count;
}

int main()
{
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    int arr[rows][COLS];

    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    int result = countIdenticalArrays(arr, rows);
    cout << "\nTotal number of identical rows = " << result << endl;

    return 0;
}
