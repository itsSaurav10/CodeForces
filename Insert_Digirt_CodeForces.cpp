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
			ll n, d;
			cin >> n >> d;
			string s;
			cin >> s;
			int count = -1;
			rep(i, 0, n){
				if(s[i] < d +'0'){
					count = i;
					break;
				}
			}
			if(count == -1){
				cout << s << d << endl;
			}
			else{
				s.insert(count, to_string(d));
				cout << s << endl;
			}
		}
};


int main() {
	Solution sol;
	sol.test_cases();
	return 0;
}

