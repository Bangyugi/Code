#include <bits/stdc++.h>
#include <deque>
#define ll long long
using namespace std;
ll MOD = 100000007;

int main()
{
    int n;
    cin >> n;
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    for (int i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        pq.push(x);
    }
    ll ans = 0;
    while (pq.size() > 1)
    {
        ll top1 = pq.top() % MOD;
        pq.pop();
        ll top2 = pq.top() % MOD;
        pq.pop();
        pq.push((top1 + top2) % MOD);
        ans += (top1 + top2) % MOD;
        ans %= MOD;
    }
    cout << ans << endl;
    return 0;
}
