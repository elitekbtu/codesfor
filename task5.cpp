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
    cout<<"Екі бүтін сан енгізіңіз: ";
    cin>>A>>B;
    cout<<"Суммасы: "<<Sum(A, B)<<", Көбейтіндісі: "<<Mul(A, B)<<endl;
    return 0;
}
