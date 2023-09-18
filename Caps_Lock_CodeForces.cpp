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
			string s, temp="";
			cin>>s;
			rep(i, 1, s.size()){
				temp += s[i];
			}
			char first = s[0];
			if(first >= 'a' and first <= 'b'){
				first.toupper();
			}
			string answer = first + temp;
			cout << answer << endl;
		}
};


int main() {
	Solution sol;
	sol.test_cases();
	return 0;
}

