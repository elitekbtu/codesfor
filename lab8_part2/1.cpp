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
    int maxElem = INT_MIN;
    int minElem = INT_MAX;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (mat[i][j] > maxElem) maxElem = mat[i][j];
            if (mat[i][j] < minElem) minElem = mat[i][j];
        }
    }

    cout << "Max Element: " << maxElem << endl;
    cout << "Min Element: " << minElem << endl;
    return 0;
}
