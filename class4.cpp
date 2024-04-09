#include <iostream>
using namespace std;
int main() {
    int TotalMoney;
    int soap;
    cout<<"Please enter the total amount you have:";
    cin>>TotalMoney;
    cout<<"Please enter the price of Soap:";
    cin>>soap;
    cout<<"You will recieve "<<TotalMoney - soap<<".";
    return 0;
}