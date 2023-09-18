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
	ll n;
	cin>>n;
	vi arr(n);
	ll sum=0;
	int i;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	x;
	ll temp=arr[n-1];
	for(int i=0;i<n-1;i++){
		sum = sum + abs(temp - arr[i]);
	}
	cout<<sum<<endl;
	return 0;
}
