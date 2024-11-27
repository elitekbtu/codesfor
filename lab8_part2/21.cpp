#include <iostream>
using namespace std;

int main()
{
    int mat[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}};

    int max = mat[0][0];
    int min = mat[0][0];

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if (j >= i && max < mat[i][j]){
                max = mat[i][j];
            }
            if (j >= i && min > mat[i][j]){
                min = mat[i][j];
            }
        }
    }
    cout << "Max value: " << max << endl;
    cout << "Min value: " << min << endl;

    max = mat[0][0];
    min = mat[0][0];
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if (j <= i && max < mat[i][j]){
                max = mat[i][j];
            }
            if (j <= i && min > mat[i][j]){
                min = mat[i][j];
            }
        }
    }
    cout << "Max value: " << max << endl;
    cout << "Min value: " << min << endl;

    int submat[3][3];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            submat[i][j] = mat[i][j];
        }
    }
    int submat2[3][3];
    for (int i = 0; i < 3; i++){
        for (int j = 2; j < 5; j++){
            submat2[i][j - 2] = mat[i][j];
        }
    }
    max = submat[0][0];
    min = submat[0][0];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (j >= i && max < submat[i][j]){
                max = submat[i][j];
                }
            if (j >= i && min > submat[i][j]){
                min = submat[i][j];
            }
        }
    }
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (i + j <= 3 - 1 && max < submat2[i][j]){
                max = submat2[i][j];
            }
            if (i + j <= 3 - 1 && min > submat2[i][j]){
                min = submat2[i][j];
            }
        }
    }
    cout << "Max value: " << max << endl;
    cout << "Min value: " << min << endl;

    for (int i = 2; i < 5; i++){
        for (int j = 0; j < 3; j++){
            submat[i - 2][j] = mat[i][j];
        }
    }

    for (int i = 2; i < 5; i++){
        for (int j = 2; j < 5; j++){
            submat2[i - 2][j - 2] = mat[i][j];
        }
    }

    max = submat[2][2];
    min = submat[2][2];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (i + j >= 3 - 1 && max < submat[i][j]){
                max = submat[i][j];
            }
            if (i + j >= 3 - 1 && min > submat[i][j]){
                min = submat[i][j];
            }
        }
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (j <= i && max < submat2[i][j]){
                max = submat2[i][j];
            }
            if (j <= i && min > submat2[i][j]){
                min = submat2[i][j];
            }
        }
    }
    cout << "Max value: " << max << endl;
    cout << "Min value: " << min << endl;

    return 0;
}
