#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    int ones = 0, zeros = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] == 1) ones++;
        else zeros++;
    }

    if (ones == zeros) {
        cout << "0\n";
        return 0;
    }

    int operations = 0, count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) count++;
        else count--;
        if (count == 0) operations++;
    }

    cout << operations << "\n";

    return 0;
}
