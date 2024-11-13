#include <iostream>
#include <cmath>
using namespace std;

int PowerA(int A, int B) {
    return pow(A, B);
}

int main() {
    int A, B;
    cout<<"Негіз және дәреже енгізіңіз: ";
    cin>>A>>B;
    cout<<A<<"-дің "<<B<<"-ге дәрежесі: "<<PowerA(A, B)<<endl;
    return 0;
}
