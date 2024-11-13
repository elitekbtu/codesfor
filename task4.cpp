#include <iostream>
using namespace std;

void PrintChar(int n, char c) {
    for (int i=1; i<=n; i++) {
        for (int j=0; j<i; j++) {
            cout<<c;
        }
        cout<<endl;
    }
}

int main() {
    int n;
    char c;
    cout<<"Сан және символ енгізіңіз: ";
    cin>>n>>c;
    PrintChar(n, c);
    return 0;
}
