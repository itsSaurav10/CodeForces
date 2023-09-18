#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
const int M = 1e5 + 5;
int n, m, p[N], t[N];
int c[N];
int dp[M][N];

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> p[i] >> t[i];
        c[p[i]]++;
    }
    sort(t + 1, t + n + 1);
    for (int i = 1; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            dp[i][j] = INT_MAX;
        }
    }
    dp[0][0] = 0;
    for (int i = 1; i <= m; i++) {
        int sum = 0;
        for (int j = n; j >= 0; j--) {
            if (dp[i - 1][j] == INT_MAX) {
                continue;
            }
            for (int k = 0; k <= c[i] && k <= j; k++) {
                if (j - k >= 0) {
                    dp[i][j] = min(dp[i][j], dp[i - 1][j - k] + max(sum, (j - k) * t[i]));
                }
            }
            sum += t[i] * c[i];
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        ans += dp[m][i];
    }
    cout << ans << endl;
    return 0;
}

