#include <iostream>
using namespace std;

void PrintMultiplicationTable(int num) {
    for (int i=1; i<=10; i++) {
        cout<<num<<" * "<<i<<" = "<<num*i<<endl;
    }
}

int main() {
    int num;
    cout<<"Санды еңгізіңіз: ";
    cin>>num;
    cout<<"Көбеййту кестесі: "<<endl;
    PrintMultiplicationTable(num);
    return 0;
}
