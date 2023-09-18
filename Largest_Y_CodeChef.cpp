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
			inp;
			ll x;
			cin >> x;
			vi arr(n);
			read(arr);
			ll answer = 0;
			rep(i, 0 ,30){
				ll temp = x;
				ll val = 0;
				rep(j, 0, n){
					val = val | (1 << ((arr[j] >> i) & 1));
				}
				if (val != 3){
					continue;
				}
				if (temp & (1 << i)){
					temp = temp ^ (1 << i);
					reped(j, 0, i){
						temp = temp | (1 << j);
					}
				}
				answer = max(answer, temp);
			}
			cout << answer << endl;
		}
};


int main() {
	Solution sol;
	sol.test_cases();
	return 0;
}
