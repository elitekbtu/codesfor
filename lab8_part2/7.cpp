#include <iostream>
using namespace std;

int main() {
    int mat[4][4] = {
        {2, 1, 4, 5},
        {1, 3, 3, 6},
        {7, 8, 9, 10},
        {11, 12, 13, 14}
    };
    int sum = 0;
    for (int j = 0; j < 4; j++) {
        sum += mat[0][j];
    }

    cout << "Sum of first row elements: " << sum << endl;
    return 0;
}
