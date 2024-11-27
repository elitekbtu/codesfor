#include <iostream>
using namespace std;

int main() {
    int mat[5][5] = {
        {2, 1, 4, 5, 6},
        {1, 3, 3, 6, 7},
        {7, 8, 9, 10, 11},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20}
    };
    int a, b;
    cout << "Enter values for a and b: ";
    cin >> a >> b;

    cout << "Numbers in the range [" << a << ", " << b << "] in the matrix: " << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (mat[i][j] >= a && mat[i][j] <= b) {
                cout << mat[i][j] << " ";
            }
        }
    }
    cout << endl;
    return 0;
}
