#include <iostream>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    int l[n];
    for(int i=0;i<n;i++)
    {
        cin >> l[i];
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=l[i];
    }
    cout << sum;
    return 0;
}
