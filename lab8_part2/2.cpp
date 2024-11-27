#include <iostream>
using namespace std;

int main() {
    int mat[4][4] = {
        {2, 1, 4, 5},
        {1, 3, 3, 6},
        {7, 8, 9, 10},
        {11, 12, 13, 14}
    };
    int evenCount = 0;
    int oddCount = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (mat[i][j] % 2 == 0) evenCount++;
            else oddCount++;
        }
    }

    cout << "Even Elements: " << evenCount << endl;
    cout << "Odd Elements: " << oddCount << endl;
    return 0;
}
