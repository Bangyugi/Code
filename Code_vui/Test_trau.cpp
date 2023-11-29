#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5 + 1;
struct canh
{
    int x, y, w;
};
vector<canh> v;
int res = 1;
int sz[maxn], parent[maxn];

int find(int u)
{
    if (u == parent[u])
        return u;
    return parent[u] = find(parent[u]);
}
bool Union(int a, int b)
{
    a = find(a);
    b = find(b);
    if (a == b)
        return 0;
    if (sz[a] < sz[b])
        swap(a, b);
    sz[a] += sz[b];
    parent[b] = a;
    res = max(res, sz[a]);
    return 1;
}

int main()
{
    ios::sync_with_stdio(NULL);
    cout.tie(NULL);
    cin.tie(NULL);
    freopen("Test.inp", "r", stdin);
    freopen("Test.ans", "w", stdout);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
        sz[i] = 1;
    }
    int ans = n;
    for (int i = 1; i <= m; i++)
    {
        int a, b;
        cin >> a >> b;
        ans -= Union(a, b);
        cout << ans << " " << res << endl;
    }
}