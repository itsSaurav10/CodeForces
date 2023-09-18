#include<iostream>
#include<bits/stdc++.h>

#define si unordered_set<int>
#define endl "\n"
#define pi pair<int, int>
#define um unordered_map<int ,int>
#define vvi vector<vector<int>>
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
			ll n, even = 0, odd = 0;
			cin >> n;
			vi arr(n);
			rep(i, 0, n){
				cin >> arr[i];
				if(arr[i] % 2 == 0){
					even++;
				}
				else{
					odd++;
				}
			}
			if(odd == 1){
				rep(i, 0, n){
					if(arr[i] % 2 != 0){
						cout << i + 1 << endl;
					}
				}
			}
			if(even == 1){
				rep(i, 0, n){
					if(arr[i] % 2 == 0){
						cout << i + 1 << endl;
					}
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
