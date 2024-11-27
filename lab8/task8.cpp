#include <iostream>
#include <cmath>
using namespace std;

double AMean(int A, int B) {
    return (A+B)/2;
}

double GMean(int A, int B) {
    return sqrt(A*B);
}

int main() {
    int A, B;
    cin>>A>>B;
    cout<<AMean(A, B)<<GMean(A, B)<<endl;
    return 0;
}
