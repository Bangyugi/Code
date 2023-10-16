#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll fibo[100];

void init()
{
    fibo[0] = fibo[1] = 1;
    for (int i = 2; i < 92; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
}

// void Try(int i, int pos, ll n, ll &m, int &ans)
// {
//     for (int j = pos; j < 40; j++)
//     {
//         if (fibo[j] <= n)
//         {
//             m *= fibo[j];
//             // temp.push_back(fibo[j]);
//             if (m == n)
//             {
//                 // for (auto x : temp)
//                 // {
//                 //     cout << x << " ";
//                 // }
//                 // cout << endl;
//                 ans++;
//             }
//             else if (m <= n)
//             {
//                 double x = (double)(n / m);
//                 if (x == (int)x)
//                     Try(i + 1, j, n, m, ans);
//             }
//             m /= fibo[j];
//             // temp.pop_back();
//         }
//     }
// }

void solve_1(int u, ll n, int &cnt)
{
    for (int i = u; i < 92; i++)
    {
        while (n % fibo[i] == 0)
        {

            solve_1(i + 1, n / fibo[i], cnt);

            n /= fibo[i];
        }
        if (n == 1)
        {
            cnt++;
            break;
        }
    }
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(0);
    // cout.tie(0);
    init();
    sort(fibo, fibo + 92, greater<>());
    // for (int i = 0; i < 92; i++)
    // {
    //     cout << fibo[i] << " ";
    // }
    cout << endl;
    int t;
    cin >> t;
    while (t--)
    {
        int cnt = 0;
        ll n;
        cin >> n;
        solve_1(0, n, cnt);
        cout << cnt << endl;
    }
}
