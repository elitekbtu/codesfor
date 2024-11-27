#include <iostream>
#include <climits>
using namespace std;

int main() {
    int mat[4][4] = {
        {2, 1, 4, 5},
        {1, 3, 3, 6},
        {7, 8, 9, 10},
        {11, 12, 13, 14}
    };

    for (int i = 0; i < 4; i++) {
        int maxElem = INT_MIN, minElem = INT_MAX;
        int maxIdx = -1, minIdx = -1;

        for (int j = 0; j < 4; j++) {
            if (mat[i][j] > maxElem) {
                maxElem = mat[i][j];
                maxIdx = j;
            }
            if (mat[i][j] < minElem) {
                minElem = mat[i][j];
                minIdx = j;
            }
        }

        if (maxIdx != -1 && minIdx != -1) {
            swap(mat[i][maxIdx], mat[i][minIdx]);
        }
    }

    cout << "Modified matrix: " << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
