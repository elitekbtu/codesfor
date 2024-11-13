#include <iostream>
#include <vector>
using namespace std;

bool IsPrime(int num) {
    if (num<=1) return false;
    for (int i=2; i*i<=num; i++) {
        if (num%i==0) return false;
    }
    return true;
}

void PrintPrimes(int p) {
    for (int i=2; i<=p; i++) {
        if (IsPrime(i)){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

int main(){
    int num; 
    cout<<"P санның еңгізіңіз: ";
    cin>>num; 
    cout<<"P caнына дейінгі жәй сандар:"<<endl;
}

