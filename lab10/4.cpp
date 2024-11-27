#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void FillArray(int arr[], int n, int k) {
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % k;
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
    int n = 10, k = 50;
    int arr[n];
    FillArray(arr, n, k);
    printArray(arr, n);
    return 0;
}
