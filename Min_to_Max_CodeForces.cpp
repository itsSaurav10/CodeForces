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
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		vi arr(n);
		rep(n){
			cin >> arr[i];
		}
		int mini = arr[0];
		rep(n){
			mini = min(mini, arr[i]);
		}
		int answer = 0;
		rep(n){
			if(arr[i] == mini){
				answer++;
			}
		}
		cout << n - answer << endl;
	}
	return 0;
}

