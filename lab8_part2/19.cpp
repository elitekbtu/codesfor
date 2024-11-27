#include <iostream>
using namespace std;

int main() {
    int matrix[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };

    int rowSum = 0;
    for (int i = 0; i < 5; ++i) {
        rowSum += matrix[0][i];
    }

    int colSum = 0;
    for (int i = 0; i < 5; ++i) {
        colSum += matrix[i][0];
    }

    cout << "Sum of the first row: " << rowSum << endl;
    cout << "Sum of the first column: " << colSum << endl;

    if (rowSum > colSum) {
        cout << "The first row has a greater sum." << endl;
    } else if (colSum > rowSum) {
        cout << "The first column has a greater sum." << endl;
    } else {
        cout << "The sums are equal." << endl;
    }

    return 0;
}
