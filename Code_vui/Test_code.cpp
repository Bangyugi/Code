#include <bits/stdc++.h>
using namespace std;
#define NAME "Test"
// Số test kiểm tra
const int NTEST = 1000;

void makeTest()
{
    ofstream cout(NAME ".inp");
    int n, m, s, v;
    n = rand() % 9 + 1;
    m = rand() % 9 + 1;
    s = rand() % 3 + 1;
    v = rand() % 4 + 3;
    cout << n << " " << m << " " << s << " " << v << endl;
    for (int i = 1; i <= m; i++)
    {
        int x, y;
        x = rand() % 9 + 1;
        y = rand() % 9 + 1;
        cout << x << " " << y << endl;
    }
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