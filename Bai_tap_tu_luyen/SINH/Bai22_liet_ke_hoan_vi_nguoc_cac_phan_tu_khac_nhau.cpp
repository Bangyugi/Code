#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    vector<vector<int>> v;
    sort(a + 1, a + n + 1);
    do
    {
        vector<int> temp;
        for (int i = 1; i <= n; i++)
        {
            temp.push_back(a[i]);
        }
        v.push_back(temp);
    } while (next_permutation(a + 1, a + n + 1));
    sort(v.begin(), v.end(), greater<vector<int>>());
    for (auto x : v)
    {
        for (auto z : x)
        {
            cout << z << " ";
        }
        cout << endl;
    }
}