#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + n, greater<int>());
    int j1 = 0;
    int j2 = 0;
    for (int i = 0; i < 2 * n; i++)
    {
        if (i % 2 == 0)
        {
            cout << a[j1++] << " ";
        }
        else
        {
            cout << b[j2++] << " ";
        }
    }
}