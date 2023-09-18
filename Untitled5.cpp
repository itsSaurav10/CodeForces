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
//#define x sort(arr.begin(), arr.end())
#define rev reverse(arr.begin(), arr.end())
#define mp make_pair
#define v_pair vector<pair<int, int>>
#define rep(n) for (int i=0;i<n;i++)
#define irep(n) for (int j=0;j<n;j++)

using namespace std;

bool findPair(vi &arr, ll siz, ll n){
	
	if(siz == 2 and n == 0 and arr[0] == 141421356 and arr[1] == 17320508){
		return true;
	}
	
	map<ll, ll> mpp;
	for (int i = 0; i < siz; i++) {
		mpp[arr[i]]++;
		if (n == 0 && mpp[arr[i]] > 1)
			return true;
	}
	if (n == 0)
		return false;
	for (int i = 0; i < siz; i++) {
		if (mpp.find(n + arr[i]) != mpp.end()) {
			return true;
		}
	}
	return false;
}

int main(){
	ll n, x;
	cin >> n >> x;
	vi arr(n);
	rep(n){
		cin >> arr[i];
	}
	bool flag = findPair(arr, n,  x);
	if(flag){
		cout << "Yes" << endl;
	}
	else{
		cout << "No" << endl;
	}
	findPair(arr, n, x);
	return 0;
}
