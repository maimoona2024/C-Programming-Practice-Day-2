#include <iostream>
using namespace std;
int main() {
    int soapprice;
    int numberofsoap;
    int priceoffivesoap;
    cout<<"Please enter Price of 1 Soap:";
    cin>>soapprice;
    cout<<"Please enter number of Soaps you brought:";
    cin>>numberofsoap;
    priceoffivesoap = soapprice*numberofsoap;
    cout<<"The Total Price of 5 Soaps is Rs "<<priceoffivesoap<<"/-.";
    return 0;
}