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

    for (int i = 0; i < 4; i++) {
        sum += mat[i][i];
    }

    cout << "Sum of Main Diagonal Elements: " << sum << endl;
    return 0;
}
