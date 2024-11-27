#include <iostream>
using namespace std;

int functionCallCount() {
    static int count = 0;
    count++;
    return count;
}

int main() {
    cout << "Function called: " << functionCallCount() << " times" << endl;
    cout << "Function called: " << functionCallCount() << " times" << endl;
    return 0;
}