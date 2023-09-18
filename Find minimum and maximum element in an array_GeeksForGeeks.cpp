#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}

pair<long long, long long> getMinMax(long long a[], int n) {
    pair<long long, long long> answer;
    long long maximum = INT_MIN;
    long long minimum = INT_MAX;
    for(int i = 0; i < n; i++){
        maximum = max(maximum, a[i]);
        minimum = min(minimum, a[i]);
    }
    answer.first = minimum;
    answer.second = maximum;
    return answer;
}