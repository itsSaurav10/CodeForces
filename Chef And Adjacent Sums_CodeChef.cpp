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
			ll n;
		    cin >> n;
		    vi temp, arr(n);
		    multiset<int> st;
		    rep(i, 0, n){
		        cin >> arr[i];
		        st.insert(arr[i]);
		    }
		    sort(all(arr));
		    int last = arr[n - 1] + arr[n - 2];
		    temp.pb(arr[n - 1]);
		    st.erase(s.find(arr[n - 1]));
		    while (temp.size() < n){
		        auto it = st.lower_bound(last - temp.back());
		        if (it == st.begin()){
		            cout << "NO" << endl;
		            return;
		        }
		        it--;
		        temp.pb(*it);
		        st.erase(it);
		    }
		    cout << "YES" << endl;
		}
};


int main() {
	Solution sol;
	sol.test_cases();
	return 0;
}
