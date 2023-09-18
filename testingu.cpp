#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef pair<ld, ld> pd;

typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<ld> vd;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<pd> vpd;

#define f first
#define s second
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()

const int MAXN = (int) (1e6 + 100);
int dp[MAXN], pref[MAXN];
int n, m;
string x;

int go(int index) {
    if(index < 0) return 0;
    if(dp[index] != -1) return dp[index];

    int stop = index - m + 1;
    int currSum = pref[index];
    if(stop > 0) currSum -= pref[stop - 1];
    int ret = currSum > 0 ? 1 : 0;
    ret += go(stop - 1);
    return dp[index] = ret;
}

void solve() {
    cin >> n >> m >> x;

    int col = 0;
    vi colSum(m, 0);

    for(int i = 0; i < x.length(); i++) {
        pref[i] = x[i] - '0';
        if(i > 0) pref[i] += pref[i - 1];
        dp[i] = -1;
    }

    for(int i = 0; i < n * m; i++) {
        int currCol = i % m;
        if(x[i] == '1') colSum[currCol]++;
        if(x[i] == '1' && colSum[currCol] == 1) col++;
        int row = go(i);
        // cout << col << ' ' << row << ' ';
        cout << col + row << ' ';
    }
    cout << '\n';
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int tc = 1;
    cin >> tc;

    for(int tt = 1; tt <= tc; tt++) {
        solve();
    }

    return 0;
}
