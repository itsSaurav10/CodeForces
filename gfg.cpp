#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int bag1 = arr[0], bag2 = arr[1], bag3 = arr[2];
    for(int i = 3; i < n; i++) {
        if(bag1 <= bag2 && bag1 <= bag3) {
            bag1 += arr[i];
        }
        else if(bag2 <= bag1 && bag2 <= bag3) {
            bag2 += arr[i];
        }
        else {
            bag3 += arr[i];
        }
    }
    int score = abs(bag1 - bag2) + abs(bag2 - bag3) ;
    int max_weight = max(max(bag1, bag2), bag3);
    int min_score = max_weight - (score - max_weight) / 2;
    cout << min_score << endl;
    return 0;
}

