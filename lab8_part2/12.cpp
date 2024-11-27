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
    int sum = 0;
    int product = 1;

    for (int i = 0; i < 4; i++) {
        int maxElem = INT_MIN;
        for (int j = 0; j < 4; j++) {
            if (mat[i][j] > maxElem) maxElem = mat[i][j];
        }
        sum += maxElem;
        product *= maxElem;
    }

    cout << "Sum of Max Elements: " << sum << endl;
    cout << "Product of Max Elements: " << product << endl;
    return 0;
}
