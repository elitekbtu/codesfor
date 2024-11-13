#include <iostream>
using namespace std;

void Print(int n, char c) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
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
    Print(n, c);
    return 0;
}
