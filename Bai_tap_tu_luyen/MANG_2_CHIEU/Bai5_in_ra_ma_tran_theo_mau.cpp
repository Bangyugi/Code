#include <bits/stdc++.h>
using namespace std;

bool soThuanNghich(int n)
{
    int m = n;
    int rev = 0;
    while (n)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    if (m == rev)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "Pattern 1:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[j][i] << " ";
        }
        cout << endl;
    }

    cout << "Pattern 2:" << endl;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Pattern 3:" << endl;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[j][i] << " ";
        }
        cout << endl;
    }

    cout << "Pattern 4:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}