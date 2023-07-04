#include <bits/stdc++.h>
using namespace std;

void nhapMang(int *&a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> *(a + i);
    }
}

void xuatMang(int *&a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << *(a + i) << " ";
    }
}

void chenSo(int *&a, int &n, int x, int k)
{
    for (int i = n; i >= k - 1; i--)
    {
        *(a + i) = *(a + i - 1);
    }
    *(a + k - 1) = x;
    n++;
}

int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    nhapMang(a, n);
    xuatMang(a, n);
    cout << "\n";
    int t = 10;
    while (t--)
    {
        int x, k;
        cin >> x >> k;
        chenSo(a, n, x, k);
        xuatMang(a, n);
        cout << "\n";
    }
}