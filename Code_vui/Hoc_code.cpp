#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m, r, l, k, d;
    cin >> n >> m >> k;
    long long a[n + 1];
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    long long D[n + 1];
    a[0] = 0;
    for (long long i = 1; i <= n; i++)
    {
        D[i] = a[i] - a[i - 1];
        // cout << D[i] << " ";
    }
    // cout << endl;
    vector<long long> thaoTac[m + 1];
    for (long long i = 1; i <= m; i++)
    {
        cin >> l >> r >> d;
        thaoTac[i].push_back(l);
        thaoTac[i].push_back(r);
        thaoTac[i].push_back(d);
    }
    while (k--)
    {
        cin >> l >> r;
        for (long long i = l; i <= r; i++)
        {
            D[thaoTac[i][0]] += thaoTac[i][2];
            D[thaoTac[i][1] + 1] -= thaoTac[i][2];
        }
    }
    D[0] = 0;
    for (long long i = 1; i <= n; i++)
    {
        D[i] += D[i - 1];
    }
    for (long long i = 1; i <= n; i++)
    {
        cout << D[i] << " ";
    }
}
