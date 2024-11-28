#include <iostream>
using namespace std;

void swapRowsAndColumns(int a[][3], int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < columns; j++) {
            swap(a[i][j], a[j][i]);
        }
    }
}

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    swapRowsAndColumns(arr, 3, 3);
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<' ';
        }
        cout<<'\n';
    }
    return 0;
}
