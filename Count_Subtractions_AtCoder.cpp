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

	public:
		void test_cases(){
			cin >> t;
			while(t--){
				solve();
			}
		}

		void solve(){
			ll a, b;
			cin >> a >> b;
			if(a == b){
				cout << 0 << endl;
				return;
			}
			ll count = 0;
			while(a != b){
				if(a > b){
					a = a - b;
					count++;
				}
				else if(b > a){
					b = b - a;
					count++;
				}
			}
			cout << count << endl;
		}
};


int main() {
	Solution sol;
	//sol.test_cases();
	sol.solve();
	return 0;
}
