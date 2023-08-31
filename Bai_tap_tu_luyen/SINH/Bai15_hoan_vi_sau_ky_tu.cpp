#include <bits/stdc++.h>
using namespace std;

bool final = false;
string s;
char a[1000001];
int n;

void sinh()
{
    int i = n - 1;
    while (i >= 1 && s[i] > s[i] + 1)
    {
        i--;
    }
    if (i == 0)
    {
        final = true;
    }
    else
    {
        int j = n;
        if (s[j] < s[i])
        {
            j--;
        }
        swap(s[i], s[j]);
        sort(s.begin() +1, s.end());
    }
}

int main()
{
    cin >> s;
    n = s.size();
    sort(s.begin(), s.end());
    // for (int i = 1; i <= n; i++)
    // {
    //     a[i] = s[i - 1];
    // }
    // // for (int i = 1; i <= n; i++)
    // // {
    // //     cout << a[i] << " ";
    // // }
    // while (!final)
    // {
    //     for (int i = 1; i <= n; i++)
    //     {
    //         cout << a[i];
    //     }
    //     cout << endl;
    //     sinh();
    // }
}