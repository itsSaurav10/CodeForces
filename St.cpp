#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    // swap A and B if A is greater than B
    if (A > B) {
        int temp = A;
        A = B;
        B = temp;
    }

    // compute GCD using Euclidean algorithm
    while (B != 0) {
        int temp = B;
        B = A % B;
        A = temp;
    }

    // calculate number of times operation is repeated
    int count = (A == 1) ? 0 : B / A;  // B / A gives the number of times the operation is repeated
    cout << count << endl;
    return 0;
}

