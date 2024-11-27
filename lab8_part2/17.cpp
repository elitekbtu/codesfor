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

    for (int i = 0; i < 5; i++) {
        int sum = 0;
        for (int j = 0; j < 5; j++) {
            sum += mat[i][j];
        }
        cout << "Average of row " << i << ": " << static_cast<double>(sum) / 5 << endl;
    }
    return 0;
}
