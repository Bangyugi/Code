#include <bits/stdc++.h>
using namespace std;

vector<long long> adj[100001];
long long c[100001];
long long p[100001];
long long res[100001];
long long n, k;

long long DFS(long long x)
{
    long long res = 0;
    if (adj[x].empty())
    {
        res = c[x];
    }
    else
    {
        for (auto it : adj[x])
        {
            res += DFS(it);
        }
        res = min(res, c[x]);
    }
    return res;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while (t--)
    {

        // long long c[100001];
        // long long p[100001];
        // long long res[100001];
        memset(c, 0, sizeof(c));
        memset(res, 0, sizeof(res));
        memset(p, 0, sizeof(p));
        for (long long i = 1; i <= n; i++)
        {
            adj[i].clear();
        }
        cin >> n >> k;
        for (long long i = 1; i <= n; i++)
        {
            cin >> c[i];
        }
        for (long long i = 1; i <= k; i++)
        {
            cin >> p[i];
            c[p[i]] = 0;
        }
        cin.ignore();
        for (long long i = 1; i <= n; i++)
        {
            long long m;
            cin >> m;
            long long x;
            while (m--)
            {
                cin >> x;
                adj[i].push_back(x);
            }
        }
        // cout << "Res: ";
        for (long long i = 1; i <= n; i++)
        {
            cout << DFS(i) << " ";
        }
        cout << endl;
    }
}