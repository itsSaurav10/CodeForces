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
#define rep(i, a, n) for (int i = a; i < n; i++)
#define repe(i, a, n) for (int i = a; i <= n; i++)
#define repd(i, a, n) for(int i = n; i > a; i--)
#define reped(i, a, n) for(int i = n - 1; i >= a; i--)
#define feach(arr) for(auto it : arr)
#define inp ll n; cin >> n;
#define read(arr) rep(i, 0, n) cin >> arr[i]
#define print(arr) rep(i, 0, n) cout << arr[i] << " "
#define Arr arr

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
			ll a, b, c, d;
			cin >> a >> b >> c >> d;
			ll sum1 = b + c + d;
			ll sum2 = a + c + d;
			ll sum3 = a + b + d;
			ll sum4 = a + b + c;
			if(a > sum1 or b > sum2 or c > sum3 or d > sum4){
				cout << "YES" << endl;
				return;
			}
			else{
				cout << "NO" << endl;
				return;
			}
		}
};


int main() {
	Solution sol;
	sol.test_cases();
	return 0;
}
