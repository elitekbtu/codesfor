#include <iostream>
using namespace std;

int SumRange(int A, int B) {
    int sum=0;
    for (int i=A; i<=B; i++) {
        sum+=i;
    }
    return sum;
}

int main() {
    int A, B;
    cout << "Екі бүтін санды енгізіңіз: ";
    cin>>A>>B;
    cout<<"Суммасы"<<SumRange(A, B)<<endl;
    return 0;
}
