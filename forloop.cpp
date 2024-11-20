//Using for loop in C++ to find sum of n numbers//
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    cout << "The sum of n numbers is:" << sum;
    return 0;
}