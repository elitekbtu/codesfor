#include <iostream>
using namespace std;

int sumRow(int a[][3], int row, int columns) {
    int sum = 0;
    for (int i = 0; i < columns; i++) {
        sum += a[row][i];
    }
    return sum;
}

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << "Sum of row 1: " << sumRow(arr, 1, 3) << endl;
    return 0;
}
