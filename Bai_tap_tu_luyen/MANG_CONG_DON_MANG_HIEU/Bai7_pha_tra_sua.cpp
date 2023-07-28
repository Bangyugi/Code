#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, q;

    cin >> n >> k >> q;
    long long a[200000];
    memset(a, 0, sizeof(a));

    long long D[n];
    D[0] = a[0];
    for (int i = 1; i < 200000; i++)
    {
        D[i] = a[i] - a[i - 1];
    }

    int l, r;
    while (q--)
    {
        cin >> l >> r;
        D[l] += k;
        D[r + 1] -= k;
    }

}