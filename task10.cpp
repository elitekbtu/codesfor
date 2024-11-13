#include <iostream>
using namespace std;

int SumOfDigits(int num) {
    int sum=0;
    while (num>0) {
        sum+=num%10;
        num/=10;
    }
    return sum;
}

int main() {
    int num1, num2;
    cin>>num1>>num2;
    int sum1=SumOfDigits(num1);
    int sum2=SumOfDigits(num2);
    if(sum1>sum2){
        cout<<num1<<endl;
    }
    else{
        cout<<num2<<endl;
    }
    return 0;
}
