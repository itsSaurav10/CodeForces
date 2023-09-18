#include<iostream>
#include<bits/stdc++.h>

#define si set<int>
#define endl "\n"
#define um unordered_map<int ,int>
#define vvi vector<vector<int>>
#define vi vector<int>
#define pb push_back
#define ll long long
#define lli long long int
#define x sort(arr.begin(), arr.end())
#define mp make_pair
#define v_pair vector<pair<int, int>>


using namespace std;

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
		ll n,a;
		cin>>n>>a;
		vi arr(n);
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		x;
		cout<<arr[n-a]-1<<endl;
	}
	return 0;
}

