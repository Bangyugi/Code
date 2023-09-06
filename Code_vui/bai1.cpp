#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("bai1.inp", "r", stdin);
    freopen("bai1.out", "w", stdout);
    int n, m, r, l, k, d;
    cin >> n >> m >> k;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    vector<int> D(n + 1);
    for (int i = 1; i <= n; i++)
    {
        D[i] = a[i] - a[i - 1];
    }
    vector<pair<int, pair<int, int>>> thaoTac(m + 1);
    for (int i = 1; i <= m; i++)
    {
        cin >> l >> r >> d;
        thaoTac[i] = {l, {r, d}};
    }
    while (k--)
    {
        cin >> l >> r;
        for (int i = l; i <= r; i++)
        {
            D[thaoTac[i].first] += thaoTac[i].second.second;
            D[thaoTac[i].second.first + 1] -= thaoTac[i].second.second;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        D[i] += D[i - 1];
    }
    for (int i = 1; i <= n; i++)
    {
        cout << D[i] << " ";
    }
}
