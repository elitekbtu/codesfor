#include <iostream>
using namespace std;

int main() {
    int mat[5][5] = {
        {2, 1, 4, 5, 6},
        {1, 3, 5, 7, 9},
        {7, 8, 9, 11, 13},
        {11, 13, 15, 17, 19},
        {16, 17, 18, 19, 20}
    };

    cout << "Rows with all odd numbers: " << endl;
    for (int i = 0; i < 5; i++) {
        bool allOdd = true;
        for (int j = 0; j < 5; j++) {
            if (mat[i][j] % 2 == 0) {
                allOdd = false;
                break;
            }
        }
        if (allOdd) {
            for (int j = 0; j < 5; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
