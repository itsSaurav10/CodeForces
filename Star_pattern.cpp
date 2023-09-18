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

int main() {
	ll n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=1;j<n-i;j++) cout<<" ";
		for(int k=0;k<=i;k++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}

