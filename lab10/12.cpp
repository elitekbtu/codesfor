#include <iostream>
using namespace std;

void printPairs(int a[][3], int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns - 1; j++) {
            if (a[i][j] % 2 == 0 && a[i][j + 1] % 2 == 0) {
                cout << "(" << a[i][j] << ", " << a[i][j + 1] << ") ";
            }
        }
    }
    cout << endl;
}

int main() {
    int arr[3][3] = {{2, 4, 6}, {8, 10, 12}, {14, 16, 18}};
    printPairs(arr, 3, 3);
    return 0;
}
