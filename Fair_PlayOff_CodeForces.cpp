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
		ll a, b, c, d;
		cin >> a >> b >> c >> d;
		ll first_winner = max (a, b);
		ll first_loser = min (a, b);
		ll second_winner = max (c, d);
		ll second_loser = min (c, d);
		if(first_loser <= second_winner and second_loser <= first_winner){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	return 0;
}
