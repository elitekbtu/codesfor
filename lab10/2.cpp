#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void fillRandomArray(int arr[], int size, int maxValue) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % maxValue;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    srand(time(0));
    int arr[10];
    fillRandomArray(arr, 10, 100);
    printArray(arr, 10);
    return 0;
}
