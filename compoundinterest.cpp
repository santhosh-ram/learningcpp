#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double principal, rate, time, compoundFrequency;
    cout << "Enter the principal amount: ";
    cin >> principal;
    cout << "Enter the annual interest rate (in %): ";
    cin >> rate;
    cout << "Enter the time (in years): ";
    cin >> time;
    cout << "Enter the number of times interest is compounded per year: ";
    cin >> compoundFrequency;
    rate = rate / 100;
    double amount = principal * pow((1 + rate / compoundFrequency), compoundFrequency * time);
    double compoundInterest = amount - principal;
    cout << "The total amount after " << time << " years is: " << amount << endl;
    cout << "The compound interest is: " << compoundInterest << endl;
    return 0;
}
