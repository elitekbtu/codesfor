#include <iostream>
using namespace std;

float AMeanRow(int a[][3], int i, int j, int k) {
    int sum = 0;
    for (int col = 0; col < j; col++) {
        sum += a[k][col];
    }
    return static_cast<float>(sum) / j;
}

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << "Mean of row 1: " << AMeanRow(arr, 3, 3, 1) << endl;
    return 0;
}
