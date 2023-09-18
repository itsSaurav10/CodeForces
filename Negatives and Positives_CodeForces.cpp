#include<iostream>
#include<bits/stdc++.h>

#define si set<int>
#define endl "\n"
#define pi pair<int, int>
#define um map<int ,int>
#define vvi vector<vector<int> >
#define vi vector<int>
#define pb push_back
#define eb emplace_back
#define ll long long
#define lli long long int
#define vl vector<ll>
#define all(arr) arr.begin(), arr.end()
#define mp make_pair
#define v_pair vector<pair<int, int>>
#define rep(i, a, n) for (int i = a;i < n;i++)

using namespace std;

class Solution{
	private:
		ll t, n;

	public:
		void test_cases(){
			cin >> t;
			while(t--){
				solve();
			}
		}

		void solve(){
			cin >> n;
			vi arr(n);
			ll sum = 0, count_neg = 0;
			rep(i, 0, n){
				cin >> arr[i];
				if(arr[i] < 0){
					++count_neg;
					arr[i] = -arr[i];
				}
				sum = sum + arr[i];
			}
			sort(all(arr));
			if(count_neg & 1){
				sum -= 2 * arr[0];
			}
			cout << sum << endl;
		}
};


int main() {
	Solution sol;
	sol.test_cases();
	return 0;
}
