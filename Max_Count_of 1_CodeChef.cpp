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
		    string s;
			cin >> s;
			ll zero_count = 0,one_count = 1;
		    char temp1 = '1',temp2 = '0';
		    rep(i, 1, n){
		        if(temp1 != s[i - 1]){
		            temp1 = '1';
					one_count++;
		        }
		        else{
		        	temp1 = '0';
				}
		        if(temp2 != s[i - 1]){
		            temp2 = '1';
		            zero_count++;
		        }
		        else{
		        	temp2 = '0';	
				}
		    }
		    cout<<max(zero_count,one_count)<<endl;
		}
};


int main() {
	Solution sol;
	sol.test_cases();
	return 0;
}

