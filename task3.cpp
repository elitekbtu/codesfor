#include <iostream>
using namespace std;

void PrintStr(int n, string str) {
    for (int i=0; i<n; i++) {
        cout<<str;
    }
}

int main() {
    int n;
    string str;
    cout<<"Сан және жол енгізіңіз: ";
    cin>>n>>str;
    PrintStr(n, str);
    return 0;
}
