#include <iostream>
using namespace std;

void printNameAge(string name, int age) {
    cout<<name<<" "<<age<<endl;
}

int main() {
    string name;
    int age;
    cin>>name;
    cin>>age;
    printNameAge(name, age);
    return 0;
}

