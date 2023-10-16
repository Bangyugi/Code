#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, k, X[1000];
bool found = false;

bool isPrime(ll n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void enter()
{
    cin >> n >> k;
}

void Try(int i, int start, int sum)
{
    for (int j = start; j <= 500; j++)
    {
        if (isPrime(j))
        {
            X[i] = j;
            sum += j;

            if (sum == n && i == k)
            {
                found = true;
                for (int l = 1; l <= i; l++)
                {
                    cout << X[l];
                    if (l != i)
                        cout << " + ";
                    else
                        cout << endl;
                }
            }
            else if (sum < n && i < k)
            {
                Try(i + 1, j + 1, sum);
            }

            sum -= j;
        }
    }
}

int main()
{
    freopen("Test.inp", "r", stdin);
    freopen("Test.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    enter();
    Try(1, 2, 0);
    if (!found)
        cout << "NOT FOUND";
}