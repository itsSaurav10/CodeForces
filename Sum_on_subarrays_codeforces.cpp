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
		ll n, k;
		cin >> n >> k;
		ll sum = (n * (n + 1)) / 2 - k;
		vi answer(n, -1);
		for(ll i = n - 1; i >= 0 and sum > 0; i--){
			ll temp = min(i + 1, sum);
			answer[i] = n - temp + 1;
			sum = sum - temp;
		}
		rep(n){
			cout << answer[i] << " ";
		}
	}
	return 0;
}

