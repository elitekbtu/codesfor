#include <iostream>
using namespace std;

int countNumber(int a[], int n, int k) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == k) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 1, 7, 1, 9, 1};
    int digit = 1;
    cout << "Number of " << digit << " in array: " << countNumber(arr, 10, digit) << endl;
    return 0;
}
