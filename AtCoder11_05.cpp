#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int H, W;
    cin >> H >> W;
    vector<vector<int> > A(H, vector<int>(W));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> A[i][j];
        }
    }

    vector<vector<int> > dp(H, vector<int>(W));
    dp[0][0] = 1;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (i > 0 && A[i][j] != A[i-1][j]) {
                dp[i][j] += dp[i-1][j];
                dp[i][j] %= MOD;
            }
            if (j > 0 && A[i][j] != A[i][j-1]) {
                dp[i][j] += dp[i][j-1];
                dp[i][j] %= MOD;
            }
        }
    }

    cout << dp[H-1][W-1] << endl;

    return 0;
}
