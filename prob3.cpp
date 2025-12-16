#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];

    cout << "Enter a 3x3 matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    bool isIdentity = true;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j && matrix[i][j] != 1) {       
                isIdentity = false;
            }
            else if (i != j && matrix[i][j] != 0) {
                isIdentity = false;
            }
        }
    }
    if (isIdentity)
        cout << "\nThe matrix is an Identity Matrix.\n";
    else
        cout << "\nThe matrix is NOT an Identity Matrix.\n";

    return 0;
}
