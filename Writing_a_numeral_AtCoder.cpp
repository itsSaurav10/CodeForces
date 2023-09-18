#include<iostream>
#include<bits/stdc++.h>

#define si unordered_set<int>
#define endl "\n"
#define pi pair<int, int>
#define um unordered_map<int ,int>
#define us unordered_map<string, int>
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
#define rep(i, a, n) for (int i = a; i < n; i++)
#define repe(i, a, n) for (int i = a; i <= n; i++)
#define repd(i, a, n) for(int i = n; i > a; i--)
#define reped(i, a, n) for(int i = n - 1; i >= a; i--)
#define feach(arr) for(auto it : arr)
#define inp ll n; cin >> n;
#define read(arr) rep(i, 0, n) cin >> arr[i]
#define print(arr) rep(i, 0, n) cout << arr[i] << " "

using namespace std;

class Solution {
	private:
		ll t;

	public:
		void test_cases(){
			cin >> t;
			while(t--){
				solve();
			}
		}

		void solve(){
			int MOD = 998244353;
			string S = "1";
			int Q;
			cin >> Q;
			rep(i, 0, Q){
				int query;
				cin >> query;
				if (query == 1) {
					char ch;
					cin >> ch;
					S += ch;
				}
				else if (query == 2 && S.length() >= 2) {
					S = S.substr(1);
				}
				else if (query == 3) {
					int n = stoi(S);
					cout << (int)n % MOD << endl;
				}
			}
		}
};


int main() {
	Solution sol;
	//sol.test_cases();
	sol.solve();
	return 0;
}
