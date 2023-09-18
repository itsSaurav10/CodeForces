#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int count_triples(int n) {
    vector<vector<int> > dp(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i | j) > n) {
                continue;
            }
            if ((i | j) == n && i < n && j < n) {
                dp[i][j] = 1;
            }
            for (int i2 = i+1; i2 < n; i2++) {
                for (int j2 = j+1; j2 < n; j2++) {
                    if ((i2 | j2) == (i | j)) {
                        dp[i][j] = (dp[i][j] + dp[i2][j2]) % MOD;
                    }
                }
            }
        }
    }
    int ans = 0;
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            ans = (ans + dp[i][j]) % MOD;
        }
    }
    return ans / 2;
}

int main() {
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	cout << count_triples(n) << endl;
	}
    return 0;
}
