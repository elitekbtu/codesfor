#include <iostream>
using namespace std;

void PrintMultiplicationTable(int num) {
    for (int i=1; i<=10; i++) {
        cout<<num<<" * "<<i<<" = "<<num*i<<endl;
    }
}

int main() {
    int num;
    cin>>num;
    PrintMultiplicationTable(num);
    return 0;
}
