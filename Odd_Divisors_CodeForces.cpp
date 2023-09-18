#include<iostream>
#include<bits/stdc++.h>

#define si set<int>
#define endl "\n"
#define pi pair<int, int>
#define um unordered_map<int ,int>
#define vvi vector<vector<int>>
#define vi vector<int>
#define pb push_back
#define eb emplace_back
#define ll long long
#define lli long long int
#define x sort(arr.begin(), arr.end())
#define rev reverse(arr.begin(), arr.end())
#define mp make_pair
#define v_pair vector<pair<int, int>>


using namespace std;

void solve(ll n){
	for(int i=1;i<=n;i++){
		if(n%i==0){
			if(i%2!=0 and i>1){
				cout<<"YES"<<endl;
				return;
			}
		}
	}
	cout<<"NO"<<endl;
}

int main() {
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		solve(n);
	}
	return 0;
}

