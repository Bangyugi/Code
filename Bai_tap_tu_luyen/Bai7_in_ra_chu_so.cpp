#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (isdigit(s[i]))
            cout << s[i];
    }
    cout << endl;
    for (int i = 0; i < s.size(); i++)
    {
        if (!isdigit(s[i]))
            cout << s[i];
    }
}