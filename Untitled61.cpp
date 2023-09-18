#include <iostream>
#include <vector>
#include <string>

using namespace std;

long long find_number_in_sequence(int k) {
    long long i = 0;
    vector<long long> result;
    long long n = 1;
    while (true) {
        if (to_string(n).find('4') != string::npos) {
            n++;
            continue;
        }
        result.push_back(n);
        i++;
        if (i == k) {
            return n;
        }
        n++;
    }
}

int main() {
    long long k;
    cout << "Enter the position k: ";
    cin >> k;
    long long number = find_number_in_sequence(k);
    cout << "The number at position " << k << " in the living sequence is " << number << endl;
    return 0;
}
