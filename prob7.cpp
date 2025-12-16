#include <iostream>
using namespace std;

const int ROWS = 5;
const int COLS = 5;

char world[ROWS][COLS] = {
    {'#', '-', '#', '-', '#'},
    {'-', '#', '-', '#', '-'},
    {'#', '-', '-', '-', '#'},
    {'-', '#', '-', '#', '-'},
    {'-', '-', '-', '-', '-'} // ground
};

bool gravityOn = false;

// --------------------------------------------------
// Display Function
// --------------------------------------------------
void DisplayWorld() {
    cout << "\nWORLD STATE:\n";
    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c++) {
            cout << world[r][c] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// --------------------------------------------------
// Set Gravity Function
// --------------------------------------------------
void SetGravityStatus(bool status) {
    gravityOn = status;
    cout << "Gravity is now " << (gravityOn ? "ON" : "OFF") << endl;
}

// --------------------------------------------------
// TimeTick Function
// --------------------------------------------------
void TimeTick(int times) {
    if (!gravityOn) {
        cout << "Gravity is OFF — world will not change!\n";
        return;
    }

    while (times--) {
        // Process each row from BOTTOM–UP so blocks fall correctly
        for (int r = ROWS - 2; r >= 0; r--) {
            for (int c = 0; c < COLS; c++) {

                // If block AND space below is empty → move down
                if (world[r][c] == '#' && world[r + 1][c] == '-') {
                    world[r + 1][c] = '#';
                    world[r][c] = '-';
                }
            }
        }
    }
}

int main() {

    DisplayWorld();

    SetGravityStatus(true);    // turn gravity ON

    TimeTick(1);               // fall 1 step
    DisplayWorld();

    TimeTick(3);               // fall 3 more steps
    DisplayWorld();

    return 0;
}
