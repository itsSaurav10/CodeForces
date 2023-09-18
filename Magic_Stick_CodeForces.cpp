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
		ll t, x, y;

	public:
		void test_cases(){
			cin >> t;
			while(t--){
				solve();
			}
		}

		void solve(){
			cin >> x >> y;
			if(x > 3){
				cout << "YES" << endl;
			}
			else if(x == 1){
				if(y == 1){
					cout << "YES" << endl;
				}
				else{
					cout << "NO" << endl;
				}
			}
			else{
				if(y <= 3){
					cout << "YES" << endl;
				}
				else{
					cout << "NO" << endl;
				}
			}
		}
};


int main() {
	Solution sol;
	sol.test_cases();
	return 0;
}
