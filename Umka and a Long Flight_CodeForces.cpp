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
		ll t;

	public:
		vl arr;
		void test_cases(){
			cin >> t;
			while(t--){
				solve();
			}
		}
		
		bool hf(ll x, ll y, ll n){
			if(n == 1){
				return true;
			}
			if(min(y, arr[n + 1] - y + 1) > arr[n + 1] - arr[n]){
				return false;
			}
			y = min(y, arr[n + 1] - y + 1);
			return hf(y, x, n - 1);
		}
		
		void solver(){
			arr.pb(1);
			arr.pb(1);
			rep(i, 0, 46){
				arr.pb(arr[i] + arr[i + 1]);
			}
		}

		void solve(){
			ll n, x, y;
			cin >> n >> x >> y;
			if(hf(x, y, n)){
				cout << "YES" << endl;
			}
			else{
				cout << "NO" << endl;
			}
		}
};


int main() {
	Solution sol;
	sol.solver();
	sol.test_cases();
	return 0;
}
