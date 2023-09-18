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
		
		ll findPairs(vi &arr, ll target){
			ll n = arr.size();
		    ll l = 0, r = n-1;
		    ll answer = 0;
		    while(l < r){
		        if (arr[l] + arr[r] <= target){
		            answer += (r - l);
		            l++;
		        }
		        else
		            r--;
		    }
		    return answer;
		}

		void solve(){
			ll n, d, count = 0;
			cin >> n >> d;
			vi arr(n);
			read(arr);
			sort(all(arr));
			rep(i, 0, n){
				if(arr[i] > d){
					count++;
				}
			}
			if(count == 0){
				cout << "YES" << endl;
				return;
			}
			if(findPairs(arr, d) != 0){
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
