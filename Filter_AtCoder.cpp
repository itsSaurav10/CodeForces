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
	ll n;
	cin >> n;
	vi arr(n), answer;
	rep(n){
		cin >> arr[i];
		if(arr[i] % 2 == 0){
			answer.pb(arr[i]);
		}
	}
	for(int i = 0; i < answer.size(); i++){
		cout << answer[i] << " ";
	}
	return 0;
}
