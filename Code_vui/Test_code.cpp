#include <bits/stdc++.h>
using namespace std;
#define el cout << "/n"
#define f0(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define NAME "bai1"
// Số test kiểm tra
const int NTEST = 1000;

mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());
// Viết lại hàm random để sử dụng cho thuận tiện. Hàm random này sinh ngẫu nhiên số trong phạm vi long long, số sinh ra >= l và <= h
long long Rand(long long l, long long h)
{
    return l + rd() * 1ll * rd() % (h - l + 1);
}
void makeTest()
{
    ofstream cout(NAME ".inp");
    int a = Rand(1, 2e9), b = Rand(1, 2e9);
    cout << a << " " << b;
}

int main()
{
    srand(time(NULL));
    for (int iTest = 1; iTest <= NTEST; iTest++)
    {
        makeTest();
        system(NAME "_trau.exe");
        system(NAME ".exe");
        // Nếu dùng linux thì thay fc bằng diff
        if (system("fc " NAME ".out " NAME ".ans") != 0)
        {
            cout << "Test " << iTest << ": WRONG!\n";
            return 0;
        }
        cout << "Test " << iTest << ": CORRECT!\n";
    }
    return 0;
}