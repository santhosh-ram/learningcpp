#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int l=s.length();
    for(int i=0;i<l;i++)
    {
        if(s[i]=='0' ||s[i]=='1' ||s[i]=='2' ||s[i]=='3' ||s[i]=='4' ||s[i]=='5' ||s[i]=='6' ||s[i]=='7' ||s[i]=='8' || s[i]=='9' )
        {
            cout << s[i];
        }
    }
    return 0;
}