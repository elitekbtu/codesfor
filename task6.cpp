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
    cout<<"Екі бүтін сан енгізіңіз: ";
    cin>>A>>B;
    cout<<"Ең үлкені: "<<Max(A, B)<<", Ең кішісі: "<<Min(A, B)<<endl;
    return 0;
}
