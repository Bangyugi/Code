#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s;
    cin >> n >> s;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long sum = 0;
    long long l = 0;
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        while (sum >= s)
        {
            ans += n - i;
            sum -= a[l];
            l++;
        }
    }
    cout << ans;
}