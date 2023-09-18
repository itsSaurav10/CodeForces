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
				cout << solve() << endl;
			}
		}

		int solve(){
			string s;
			cin >> s;
			if (count(s.begin(), s.end(), '0') == 0)
				return s.size() * 1LL * s.size();
			s += s;

			int n = s.size(), answer = 0, p = 0;
			rep(i, 0, n){
				if (s[i] == '0')
					continue;
				int j = 0;
				while (i + j < n && s[i + j] == '1')
					j++;
				p = max(p, min(j, n));
				i += j - 1;
			}
			answer = p;
			int x = (p - 1) / 2;
			answer = max(answer, (p - x) * (x + 1));
			x++;
			answer = max(answer, (p - x) * (x + 1));
			return answer;
		}
};


int main() {
	Solution sol;
	sol.test_cases();
	return 0;
}

