#include <iostream>
using namespace std;

bool IsPrime(int num) {
    if (num<=1) return false;
    for (int i=2; i*i<=num; i++) {
        if (num%i==0) return false;
    }
    return true;
}

int main() {
    for (int i=100; i<=999; i++) {
        if (IsPrime(i)){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}
