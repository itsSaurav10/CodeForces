#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int x = 0, y = 0, z = 0;
    for (int i = 0; i < s.length(); i++) {
        if (i + 2 < s.length() && s.substr(i, 3) == "^_^") {
            x++;
            i += 2;
        } else if (i + 1 < s.length() && s.substr(i, 2) == "^^") {
            y++;
            i += 1;
        } else {
            z++;
        }
    }

    if (x + y >= z) {
        cout << z << endl;
    } else {
        cout << (z - x - y) / 2 + (z - x - y) % 2 << endl;
    }

    return 0;
}

