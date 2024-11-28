#include <iostream>
#include<cmath>
using namespace std;
int main() 
{
    int n,c=1;
    cin >> n;
    int temp=n;
    int m=n;
    while(temp>9)
    {
        c++;
        temp/=10;
    }
    int sum=0;
    while(n>9)
    {
        sum+=pow(n%10,c);
        n/=10;
    }
    sum+=pow(n,c);
    if(sum==m)
    {
        cout << "It is a armstrong number";
    }
    else
    {
        cout << "It is not a armstrong number";
    }
    return 0;
}