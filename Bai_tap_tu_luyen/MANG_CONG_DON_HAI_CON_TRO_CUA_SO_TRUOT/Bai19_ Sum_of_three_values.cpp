#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        int l = i + 1;
        int r = n - 1;
        while (l < r)
        {
            if (a[i] + a[l] + a[r] == k)
            {
                cout << "YES";
                return 0;
            }
            else if (a[i] + a[l] + a[r] > k)
            {
                r--;
            }
            else
            {
                l++;
            }
        }
    }
    cout << "NO";
}