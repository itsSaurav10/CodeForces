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
		
		ll solver(ll n, ll temp1, ll temp2){
			temp1--;
			temp2--;
			temp2 = min(temp2, n - temp2 - 1);
			temp1 = min(temp1, n - temp1 - 1);
			ll answer = min(temp1, temp2);
			return answer;
		}

		void solve(){
			ll n, x1, y1, x2, y2;
			cin >> n >> x1 >> y1 >> x2 >> y2;
			ll val1 = solver(n, x1, y1);
			ll val2 = solver(n, x2, y2);
			ll answer = abs(val1 - val2);
			cout << answer << endl;
		}
};


int main() {
	Solution sol;
	sol.test_cases();
	return 0;
}
