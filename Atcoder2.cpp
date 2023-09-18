#include <iostream>
#include <string>
using namespace std;

const int MOD = 998244353;

int main() {
    string S = "1";
    int Q;
    cin >> Q;

    for (int i = 0; i < Q; i++) {
        int query;
        cin >> query;

        if (query == 1) {
            char x;
            cin >> x;
            S += x;
        }
        else if (query == 2) {
            S = S.substr(1);
        }
        else {
            int n = stoi(S);
            cout << n % MOD << endl;
        }
    }

    return 0;
}
