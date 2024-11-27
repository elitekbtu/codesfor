#include <iostream>
using namespace std;

int main()
{
    int mat[4][4] = {
        {2, 1, 4, 5},
        {1, 3, 3, 6},
        {7, 8, 9, 10},
        {11, 12, 13, 14}};

    int row, col;
    cin >> row >> col;
    cout << "Elements of row:" << endl;
    for (int i = 0; i < 4; i++){
        cout << mat[row][i] << " ";
    }
    cout << endl;
    cout << "Elements of colummn:" << endl;
    for (int i = 0; i < 4; i++){
        cout << mat[i][row] << " ";
    }

    return 0;
}
