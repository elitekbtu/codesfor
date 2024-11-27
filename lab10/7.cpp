#include <iostream>
using namespace std;

void removeDuplicates(int arr[], int& n) {
    int newIndex = 0;
    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;
        for (int j = 0; j < newIndex; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            arr[newIndex++] = arr[i];
        }
    }
    n = newIndex;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[10] = {1, 2, 2, 3, 4, 4, 5, 6, 7, 8};
    int n = 10;
    removeDuplicates(arr, n);
    printArray(arr, n);
    return 0;
}
