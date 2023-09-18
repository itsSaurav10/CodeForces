#include <iostream>
#include <vector>
using namespace std;

vector<int> findUncalledIds(int n, vector<int> a) {
    vector<bool> called(n+1, false);
    vector<int> uncalledIds;
    for (int i = 0; i < n; i++) {
        int id = a[i];
        called[id] = true;
        while (called[n] && n > 0) {
            n--;
        }
        if (n == 0) {
            break;
        }
    }
    for (int i = 1; i <= n; i++) {
        if (!called[i]) {
            uncalledIds.push_back(i);
        }
    }
    return uncalledIds;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> uncalledIds = findUncalledIds(n, a);
    for (int i = 0; i < uncalledIds.size(); i++) {
        cout << uncalledIds[i] << " ";
    }
    cout << endl;
    return 0;
}
