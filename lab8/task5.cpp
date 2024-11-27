#include <iostream>
using namespace std;

int Sum(int A, int B) {
    return A+B;
}

int Mul(int A, int B) {
    return A*B;
}

int main() {
    int A, B;
    cin>>A>>B;
    cout<<Sum(A, B)<<Mul(A, B)<<endl;
    return 0;
}
