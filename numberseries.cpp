#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int c=1;
    for(int i=2;i<n+2;i++)
    {
        cout << c << endl;
        c+=i;
    }
}