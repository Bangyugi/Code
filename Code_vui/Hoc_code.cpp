#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int n;
    cin >> t;
    int a[n];
    int b[n];
    int ans[n];
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int B[n];
        B[0] = b[0];
        for (int i = 1; i < n; i++)
        {
            B[i] = B[i - 1] + b[i];
        }
        
    }
}