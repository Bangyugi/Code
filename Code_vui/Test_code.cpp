#include <bits/stdc++.h>
using namespace std;

vector<long long> adj[200001];
long long c[200001];
long long p[200001];
long long res[200001];
bool visited[200001];
long long n, k;

long long DFS(long long x)
{
    visited[x] = true;
    if (adj[x].empty())
    {
        res[x] = c[x];
    }
    else
    {
        for (auto it : adj[x])
        {
            if (!visited[it])
                res[x] += DFS(it);
            else
                res[x] += res[it];
        }
        res[x] = min(res[x], c[x]);
    }
    return res[x];
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while (t--)
    {
        memset(c, 0, sizeof(c));
        memset(res, 0, sizeof(res));
        memset(p, 0, sizeof(p));
        memset(visited, 0, sizeof(visited));
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
            if (!visited[i])
            {
                res[i] = DFS(i);
            }
        }
        for (long long i = 1; i <= n; i++)
        {
            cout << res[i] << " ";
        }
        cout << endl;
    }
}