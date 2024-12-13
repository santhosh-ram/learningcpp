#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    int c;
    if (a>b)
    {
        c=b;
    }
    else
    {
        c=a;
    }
    if(c!=0)
    {
        for(int i=c;i>0;i--)
        {
            if(a%i==0 && b%i==0)
            {
                cout << i;
                break;
            }
        }
    }
    else
    {
        cout << "GCD is not possible";
    }
}