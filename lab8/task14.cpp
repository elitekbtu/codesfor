#include <iostream>
using namespace std;

int Calc(int A, int B, char Op) {
    switch (Op) {
        case '+': return A + B;
        case '-': return A - B;
        case '*': return A * B;
        case '/': return B != 0 ? A / B : 0; 
        default: return 0;
    }
}

int main() {
    int A, B;
    char Op;
    cin>>A>>B>>Op;
    cout<<Calc(A, B, Op)<<endl;
    return 0;
}
