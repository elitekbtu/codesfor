#include <iostream>
using namespace std;

int main() {
    int mat[4][4] = {
        {2, 1, 4, 5},
        {1, 3, 3, 6},
        {7, 8, 9, 10},
        {11, 12, 13, 14}
    };
    int element;
    cout << "Enter element to find: ";
    cin >> element;

    bool found = false;
    for (int i = 0; i < 4 && !found; i++) {
        for (int j = 0; j < 4 && !found; j++) {
            if (mat[i][j] == element) {
                cout << "Element found at index: (" << i << ", " << j << ")" << endl;
                found = true;
            }
        }
    }
    
    if (!found) cout << "Element not found in the matrix." << endl;
    return 0;
}
