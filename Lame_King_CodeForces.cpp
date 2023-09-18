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

using namespace std;

int main() {
	ll t;
	cin>>t;
	while(t--){
		int a, b;
		cin>>a>>b;
		a = abs(a);
		b = abs(b);
		if(a < b){
			swap(a, b);
		}
		ll answer = a + b + max(0, a - b - 1);
		cout<< answer << endl;
	}
	return 0;
}

