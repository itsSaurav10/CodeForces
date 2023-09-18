#include <iostream>
#include <string>
#include <vector>

class Solution {
private:
    const int kMaxTestCases = 100;

public:
    void test_cases() {
        int t;
        std::cin >> t;
        t = std::min(t, kMaxTestCases); // limit the number of test cases
        while (t--) {
            solve();
        }
    }

    void solve() {
        int n, k;
        std::cin >> n >> k;
        std::string s;
        std::cin >> s;

        k = std::min(k, n - 1); // limit the number of zeros that can be added

        s[0] = '1'; // assume the first bit is already 1
        for (int i = n - 1; i > 0 && k > 0; i--) {
            if (s[i] == '0') {
                s[i] = '1';
                k--;
            }
        }

        s.reserve(n + k); // allocate memory for additional zeros
        while (k--) {
            s += '0';
        }

        std::cout << s << '\n';
    }
};

int main() {
    Solution sol;
    sol.test_cases();
    return 0;
}
