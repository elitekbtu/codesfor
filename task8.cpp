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
    cout<<"Екі бүтін сан енгізіңіз: ";
    cin>>A>>B;
    cout<<"Арифметикалық орташа мәні: "<<AMean(A, B)<<", Геометриялық орташа мәні: "<<GMean(A, B)<<endl;
    return 0;
}
