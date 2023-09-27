#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll MOD = 1e9 + 7;

int main()
{
    freopen("Test.inp", "r", stdin);
    freopen("Test.out", "w", stdout);
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    int N, S, M;
    cin >> N >> S >> M;
    if (N * (S - S / 7) < M * S)
    {
        cout << -1;
    }
    else
    {
        for (int i = 1; i <= S - S / 7; i++)
        {
            if (N * i >= M * S)
            {
                cout << i;
                return 0;
            }
        }
        cout << -1;
    }
    return 0;
}