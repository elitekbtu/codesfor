#include <iostream>
using namespace std;

int Max(int A, int B) {
    if(A>B){
        return A;
    }
    return B;
}

int Min(int A, int B) {
    if(A>B){
        return B;
    }
    return A;
}

int main() {
    int A, B;
    cin>>A>>B;
    cout<<Max(A, B)<<Min(A, B)<<endl;
    return 0;
}
