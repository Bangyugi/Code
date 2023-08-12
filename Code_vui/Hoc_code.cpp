#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        string s;
        cin >> s;

        vector<int> dp(n + 1, INT_MAX);
        dp[0] = b; // Cost to convert empty string to regular bracket sequence

        for (int i = 1; i <= n; ++i) {
            dp[i] = min(dp[i], dp[i - 1] + a); // Cost to remove character
            int balance = 0;
            for (int j = i - 1; j >= 0; --j) {
                balance += (s[j] == '(' ? 1 : -1);
                if (balance < 0) {
                    dp[i] = min(dp[i], dp[j] + b); // Cost to move character
                }
            }
        }

        cout << dp[n] << endl;
    }

    return 0;
}
