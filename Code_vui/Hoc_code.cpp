#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long a[n];
    set<long long> se;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        se.insert(a[i]);
    }
    long long t, x;
    cin >> t;
    while (t--)
    {
        cin >> x;
        if (se.find(x) != se.end())
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
        if (se.count(x))
        {
            cout << "FOUND\n";
        }
        else
        {
            cout << "NOT FOUND\n";
        }
    }

    int xoa;
    cin >> xoa;
    if (se.count(xoa))
    {
        se.erase(xoa);
    }
}