#include <iostream>
#include <string>
using namespace std;
string grid[5][5] = {
    {".", ".", ".", "*", "*"},
    {".", "*", ".", ".", "."},
    {".", "*", ".", ".", "."},
    {".", "*", ".", ".", "."},
    {".", ".", "*", "*", "."}
};
string fire(string coord) {
    char rowLetter = coord[0];
    int col = coord[1] - '1';  

    int row = rowLetter - 'A';
    if (grid[row][col] == "*")
        return "BOOM";
    else
        return "splash";
}
int main() {
    string input;

    cout << "Enter coordinate (e.g., A1, B3, D2): ";
    cin >> input;

    cout << fire(input) << endl;

    return 0;
}
