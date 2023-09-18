#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    char c;
    cin >> s >> c;
    int n = s.length();
    string max_num = s + c; // Insert the digit at the end
    for (int i = 0; i < n; i++) {
        string temp = s.substr(0, i+1) + c + s.substr(i+1, n-i);
        if (temp > max_num) {
            max_num = temp;
        }
    }
    cout << max_num << endl;
    return 0;
}
