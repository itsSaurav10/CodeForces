#include<iostream>
#include<bits/stdc++.h>

#define si set<int>
#define endl "\n"
#define pi pair<int, int>
#define um unordered_map<int ,int>
#define vvi vector<vector<int> >
#define vi vector<int>
#define pb push_back
#define eb emplace_back
#define ll long long
#define lli long long int
#define x sort(arr.begin(), arr.end())
#define rev reverse(arr.begin(), arr.end())
#define mp make_pair
#define v_pair vector<pair<int, int>>
#define rep(n) for (int i=0;i<n;i++)
#define irep(n) for (int j=0;j<n;j++)

using namespace std;

int main() {
	ll t;
	cin>>t;
	while(t--){
		string s;
		set<char>st;
		
		cin >> s;
		rep(4){
			st.insert(s[i]);
		}
		ll n = st.size();
		if(n == 1){
			cout << -1 <<  endl;
		}
		else if(n == 4){
			cout << 4 << endl;
		}
		else if(n == 3){
			cout << 4 << endl;
		}
		map<char, ll> mp;
		for(char a:s){
			mp[a]++;
		}
		for(auto it:mp){
			if(it.second==3){
				cout<< 6 << endl;
				return 0;
			}
		}
		cout << 4 << endl;
	}
	return 0;
}

