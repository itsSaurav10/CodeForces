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
#define repe(i, a, n) for (int i = a;i <= n;i++)

using namespace std;

class Solution{
	private:
		ll t;
		ll n, m;

	public:
		void test_cases(){
			cin >> t;
			while(t--){
				solve();
			}
		}

		void solve(){
			cin >> n >> m;
			vi arr(m);
			rep(i, 0, m){
				cin >> arr[i];
			}
			sort(all(arr));
			ll least_diff = arr[n - 1] - arr[0];
			repe(i, 1, m - n){
				if (arr[i + n - 1] - arr[i] < least_diff){
            		least_diff = arr[i + n - 1] - arr[i];
        		}
			}
			cout << least_diff << endl;
		}
};


int main() {
	Solution sol;
	//sol.test_cases();
	sol.solve();
	return 0;
}
