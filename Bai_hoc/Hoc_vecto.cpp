#include <bits/stdc++.h>
using namespace std;
int cnt1[10000001], cnt2[10000001];
typedef long long ll;
const int MOD = 1e9 + 7;

int main()
{
    int n;
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
    v.insert(v.begin() + 2, 1000);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
    v.erase(v.begin() + 4);
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << "\n";
    v.resize(5);
    for (auto x : v)
    {
        cout << x << " ";
    }
}