#include <iostream>
#include <cmath>
using namespace std;

double Perimeter(double a) {
    return 3*a;
}

double Area(double a) {
    return (sqrt(3)/4)*a*a;
}

int main() {
    double a;
    cin>>a;
    cout<<Perimeter(a)<<Area(a)<<endl;
    return 0;
}
