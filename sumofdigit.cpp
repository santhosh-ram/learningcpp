#include <iostream>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    int sum=0;
    while(n>9)
    {
        sum+=(n%10);
        n/=10;
    }
    sum+=n;
    cout << sum;
    return 0;
}