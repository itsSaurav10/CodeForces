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

		void solve(){
			ll h, w;
		    cin >> h >> w;
		    vector<string> arr1(h), arr2(h);
		    rep(i, 0, h){
		        cin >> arr1[i];
		    }
		    rep(i, 0, h){
		        cin >> arr2[i];
		    }
		
		    rep(s, 0, h){
		        rep(t, 0, w){
		            vector<string> arr3(h, string(w, '.'));
		            rep(i, 0, h){
		                rep(j, 0, w){
		                    int temp1 = (i + s) % h;
		                    int temp2 = (j + t) % w;
		                    arr3[temp1][temp2] = arr1[i][j];
		                }
		            }
		            if (arr3 == arr2) {
		                cout << "Yes" << endl;
		                return;
		            }
		        }
		    }
		    cout << "No" << endl;
		}
};


int main() {
	Solution sol;
	//sol.test_cases();
	sol.solve();
	return 0;
}
