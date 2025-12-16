#include <iostream>
using namespace std;
const int ROWS = 5;
const int COLS = 5;

string brands[ROWS] = {"Suzuki", "Toyota", "Nissan", "BMW", "Audi"};
string colors[COLS] = {"Red", "Black", "Brown", "Blue", "Gray"};

int cars[ROWS][COLS] =
{
    {10, 7, 12, 10, 4},   // Suzuki
    {18, 11, 15, 17, 2},  // Toyota
    {23, 19, 12, 16, 14}, // Nissan
    {7, 12, 16, 0, 2},    // BMW
    {3, 5, 6, 2, 1}       // Audi
};

// A: Print Toyota Blue cars
void printToyotaBlue() {
    cout << "Toyota Blue Cars: " << cars[1][3] << endl;
}

// B: Total number of RED cars
int totalRedCars() {
    int sum = 0;
    for(int i = 0; i < ROWS; i++)
        sum += cars[i][0];
    return sum;
}

// C: Total Nissan cars
int totalNissanCars() {
    int sum = 0;
    for(int j = 0; j < COLS; j++)
        sum += cars[2][j];
    return sum;
}

// D: Function that returns total cars of a given color
int converter(string color) {
    int colIndex = -1;

    for(int i = 0; i < COLS; i++)
        if(colors[i] == color)
            colIndex = i;

    int sum = 0;
    for(int r = 0; r < ROWS; r++)
        sum += cars[r][colIndex];

    return sum;
}

// E: Print matrix transposed (row <-> column)
void printTranspose() {
    cout << "\nTransposed Matrix:\n";
    for (int c = 0; c < COLS; c++) {
        for (int r = 0; r < ROWS; r++) {
            cout << cars[r][c] << "\t";
        }
        cout << endl;
    }
}

int main() {

    printToyotaBlue();
    cout << "Total Red Cars: " << totalRedCars() << endl;
    cout << "Total Nissan Cars: " << totalNissanCars() << endl;
    cout << "Total Blue Cars: " << converter("Blue") << endl;
    printTranspose();

    return 0;
}
