#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int index = -1;
    bool check = false;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            if (check == false)
            {
                check = true;
                cout << i + 1 << " ";
            }
            else
                index = i + 1;
        }
    }
    if (!check)
    {
        cout << -1 << " " << -1;
    }
    else
    {
        cout << index;
    }
}