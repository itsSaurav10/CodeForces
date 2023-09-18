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
			int n, s, arr[5]= {0};
			cin >> n;
			while (n--)
			{
				cin >> s;
				arr[s] += 1;
			}
			int total = arr[4] + arr[3] + arr[2] / 2;
			arr[1] -= arr[3];
			if (arr[2] % 2 == 1)
			{
				total += 1;
				arr[1] -= 2;
			}
			if (arr[1] > 0)
			{
				total += (arr[1] + 3) / 4;
			}
			cout << total << endl;
		}
};


int main() {
	Solution sol;
	//sol.test_cases();
	sol.solve();
	return 0;
}
