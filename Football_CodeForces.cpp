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

		int solve(){
			string s;
		    cin >> s;
		    ll count = 1;
		    for(int i = 1; i <= s.length(); i++){
		        if(s[i] == s[i-1]){
		            count++;
		            if(count == 7){
		                cout << "YES" << endl;
		                return 0;
		            }
		        }
				else{
		            count = 1;
		        }
		    }
		    cout<<"NO"<<endl;
		}
};


int main() {
	Solution sol;
	sol.solve();
	return 0;
}
