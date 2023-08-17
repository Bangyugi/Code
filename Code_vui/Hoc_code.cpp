#include <bits/stdc++.h>
using namespace std;
int const MOD = 1e9 + 7;
bool tn(string s)
{
    for (int i = 0; i <= s.length() / 2; i++)
        if (s[i] != s[s.length() - i - 1])
            return false;
    return true;
}

void solve1(string s)
{
    long long kq = 1;
    int tmp = 1;
    int i = 0, ok = 0;
    for (i = 0; i < s.size(); i++)
    {
        if (s[i] == s[i + 1])
            ++tmp;
        else
        {
            kq *= (tmp + 1) % MOD;
            tmp = 1;
            if (i >= s.size() / 2 + s.size() % 2 - 1)
            {
                break;
            }
        }
    }
    cout << kq % MOD << endl;
}
pair<char, long long> p[1000000];
void solve2(string s)
{
    int n = 0;
    p[0].first = s[0];
    p[0].second = 1;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
        {
            p[n].second++;
        }
        else
        {
            p[++n].first = s[i];
            p[n].second = 1;
        }
    }
    long long kq = 1;
    for (int i = 0; i <= n / 2; i++)
    {
        if ((p[i].first != p[n - i].first))
        {
            cout << "0\n";
            return;
        }
        else if (p[i].second == p[n - i].second)
        {
            kq *= (p[i].second + 1) % MOD;
        }
        else
        {
            long long k1 = min(p[i].second, p[n - i].second);
            long long k2 = max(p[i].second, p[n - i].second);
            long long l1 = 2 * k1,
                      r1 = 3 * k1,
                      l2 = 2 * k2,
                      r2 = 3 * k2;
            if (l2 > l1 && r1 >= l2 && r2 > r1)
            {
                kq *= (r1 - l2 + 1) % MOD;
            }
            else
            {
                cout << "0\n";
                return;
            }
        }
    }
    cout << kq % MOD << endl;
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        if (!tn(s))
        {
            solve2(s);
            continue;
        }
        solve1(s);
    }
}