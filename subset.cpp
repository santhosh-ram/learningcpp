#include<iostream>
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
    int count=0,a,b;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(l[i]>l[j])
            {
                count++;
                a=l[i];
                b=l[j];
            }
        }
    }
    cout << count << endl;
    cout << a << " " << b;
}