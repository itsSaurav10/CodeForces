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
		void test_cases(){
			cin >> t;
			while(t--){
				solve();
			}
		}

		void solve(){
			ll n;
			cin >> n;
			n--;
			vl arr(n);
			rep(i, 0, n){
				cin >> arr[i];
			}
			vl brr(n + 1);
			brr[0] = arr[0];
			brr[n] = arr[n - 1];
			rep(i, 0, n - 1){
				brr[i + 1] = min(arr[i], arr[i + 1]);
			}
			rep(i, 0, n + 1){
				cout << brr[i] << " ";
			}
			cout << endl;
		}
};


int main() {
	Solution sol;
	sol.test_cases();
	return 0;
}
