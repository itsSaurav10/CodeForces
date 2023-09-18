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
			cout << "Enter the number of test cases : " << endl;
			cin >> t;
			while(t--){
				solve();
			}
		}

		void solve(){
			ll n;
			cout << "Enter the size of array : " << endl;
			cin >> n;
			vi arr(n);
			cout << "Enter the values of array : " << endl;
			rep(i, 0, n){
				cin >> arr[i];
			}
			ll val;
			cout << "Enter the data to be searched : " << endl;
			cin >> val;
			rep(i, 0, n){
				if(arr[i] == val){
					cout << "Found at index " << i + 1 << endl;
					return;
				}
			}
			cout << "Not present in the array!" << endl;
		}
};


int main() {
	Solution sol;
	sol.test_cases();
	return 0;
}
