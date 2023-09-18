#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.size();
    string x(n, '0');
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            x[i] = '1';
            count++;
        } else {
            if (i == 0 || x[i - 1] == '0') {
                x[i] = '1';
                count++;
            }
        }
    }

    cout << count << endl;
    return 0;
}
