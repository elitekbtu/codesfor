#include <iostream>
#include <climits>
using namespace std;

int main() {
    int mat[5][5] = {
        {2, 1, 4, 5, 6},
        {1, 3, 3, 6, 7},
        {7, 8, 9, 10, 11},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20}
    };
    int maxElem = INT_MIN;
    int minElem = INT_MAX;

    for (int i = 0; i < 5; i++) {
        if (mat[i][i] > maxElem) maxElem = mat[i][i];
        if (mat[i][i] < minElem) minElem = mat[i][i];
    }

    cout << "Max Element in Main Diagonal: " << maxElem << endl;
    cout << "Min Element in Main Diagonal: " << minElem << endl;
    return 0;
}
