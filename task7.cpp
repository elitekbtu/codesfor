#include <iostream>
#include <cmath>
using namespace std;

int PowerA(int A, int B) {
    return pow(A, B);
}

int main() {
    int A, B;
    cin>>A>>B;
    cout<<PowerA(A, B)<<endl;
    return 0;
}
