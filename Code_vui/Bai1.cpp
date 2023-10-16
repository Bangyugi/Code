#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll MOD = 1e9 + 7;

int used[300][300];
int dx[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
int dy[8] = {-1, 0, 1, 1, 1, 0, -1, -1};

int ans = 0;

void Try(int u, int v, int n, int m, int k, int cnt)
{
    for (int i = u; i < n; i++)
    {
        for (int j = v; j < m; j++)
        {
            if (used[i][j] == 0)
            {
                used[i][j] = 1;
                for (int k = 0; k < 8; k++)
                {
                    int i1 = i + dx[k];
                    int j1 = j + dy[k];
                    if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < m)
                    {
                        used[i1][j1] = 1;
                    }
                }
                cnt++;
                if (cnt == k)
                {
                    ans++;
                }
                else
                {
                    if (j < n)
                    {
                        Try(i, j + 1, n, m, k, cnt);
                    }
                    else
                    {
                        Try(i + 1, 0, n, m, k, cnt);
                    }
                }
                for (int k = 0; k < 8; k++)
                {
                    int i1 = i + dx[k];
                    int j1 = j + dy[k];
                    if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < m)
                    {
                        used[i1][j1] = 0;
                    }
                }
                cnt--;
            }
        }
    }
}

int main()
{
    // ios_base::sync_with_stdio(NULL);
    // cin.tie(0);
    // cout.tie(0);
    int n, m, k;
    cin >> n >> m >> k;
    int cnt = 0;
    Try(0, 0, n, m, k, cnt);
    cout << ans;
    return 0;
}