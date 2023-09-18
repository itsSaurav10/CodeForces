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
		    string s,answer;
		    cin>>s;
		    n = s.length();
		    transform(s.begin(),s.end(),s.begin(), ::tolower);
		    for(ll i=0; i<n; i++){
		        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
		            continue;
		        else{
		            answer = answer + '.';
		            answer = answer + s[i];
		        }
		    }
		    cout<<answer<<endl;
		}
};


int main() {
	Solution sol;
	sol.solve();
	return 0;
}
