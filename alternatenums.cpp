#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int l[n];
    int m;
    cin >> m;
    for(int i=0;i<n;i++)
    {
        cin >> l[i];
    }
    if(m==0)
    {
        for(int i=0;i<n;i=i+2)
        {
            cout << l[i] << " ";
        }
    }
    if(m==1)
    {
        for(int i=1;i<n;i=i+2)
        {
            cout << l[i] << " ";
        }
    }
    return 0;
}