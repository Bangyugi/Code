#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll MOD = 1e9 + 7;

int main()
{
    int n;
    cin >> n;
    pair<int, int> a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    sort(a, a + n);

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int cnt = 1;
        int end = a[i].second;
        int start;
        for (int j = i + 1; j < n; j++)
        {
            start = a[j].first;
            if (start > end)
            {
                end = a[j].second;
                cnt++;
                ans = max(ans, cnt);
            }
        }
    }
    cout << ans;
    return 0;
}