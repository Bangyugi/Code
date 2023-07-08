#include <bits/stdc++.h>
using namespace std;

int timMax(int a[], int n)
{
    int max_val = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max_val)
        {
            max_val = a[i];
        }
    }
    return max_val;
}

void chepMang(int a[], int &n)
{
    int temp = timMax(a, n);
    a[n] = temp;
    n++;
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
    chepMang(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}