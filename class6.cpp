#include <iostream>
using namespace std;
int main() {
    cout<<"**Welcome to simple calculator**"<<endl;
    cout<<"You have to provide me two numbers one by one."<<endl;
    int number1;
    int number2;
    cout<<"Please Enter First Number: ";
    cin>>number1;
    cout<<"Please Enter Second Number: ";
    cin>>number2;
    int sum, add, mul, div;
    sum = number1 + number2;
    add = number1 - number2;
    mul = number1*number2;
    div = number1/number2;
    cout<<"The sum of numbers is: "<<sum<<endl;
    cout<<"The difference between numbers is: "<<sum<<endl;
    cout<<"The multiplication of numbers is: "<<sum<<endl;
    cout<<"The division of numbers is: "<<sum<<endl;
    return 0;
}