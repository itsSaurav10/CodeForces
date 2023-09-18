#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.size();
    vector<int> cnt(2);
    for (int i = 0; i < n; i++) {
        cnt[s[i] - '0']++;
    }

    int ans = min(cnt[0], cnt[1]); // minimum cost to sort string in non-decreasing order
    int cost = 0;
    for (int i = 0; i < n; i++) {
        cost += (s[i] - '0' != i % 2); // cost to make s[i] alternating
    }
    if (ans % 2 == 0) {
        ans = min(ans, cost); // if ans is even, we can make the string alternating and still sort it in non-decreasing order
    } else {
        ans = min(ans, cost - cnt[0] * (n % 2 == 0)); // otherwise, we need to remove one extra 0 or 1 to make the string alternating
    }

    cout << ans * 1e12 << '\n'; // output answer in scientific notation
    return 0;
}
