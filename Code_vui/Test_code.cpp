#include <bits/stdc++.h>
using namespace std;
#define NAME "Test"
// Số test kiểm tra
const int NTEST = 1000;

void makeTest()
{
    ofstream cout(NAME ".inp");
    long long a, b, c;
    a = rand() % 100 + 1;
    b = rand() % 100 + 1;
    c = rand() % 100 + 1;
    cout << a << " " << b << " " << c;
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