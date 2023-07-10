#include <bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
    if (n < 2)
        return 0;
    if (n == 2 || n == 3)
        return 1;
    if (n % 2 == 0 || n % 3 == 0)
        return 0;
    for (int i = 5; i < sqrt(n); i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
    }
    return 1;
}

int Lmao(int n)
{
    int cnt = 0;
    while (n > 0)
    {
        if (isprime(n % 10))
        {
            cnt++;
        }
        n /= 10;
    }
    return cnt;
}

bool cmp(int a, int b)
{
    return Lmao(a) > Lmao(b);
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    stable_sort(a, a + n, cmp);
    for (auto x : a)
    {
        cout << x << " ";
    }
}