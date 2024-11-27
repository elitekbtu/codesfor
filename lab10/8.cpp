#include <iostream>
using namespace std;

void countEvenOdd(int arr[], int size) {
    int even = 0, odd = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    cout << "Even: " << even << ", Odd: " << odd << endl;
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    countEvenOdd(arr, 10);
    return 0;
}
