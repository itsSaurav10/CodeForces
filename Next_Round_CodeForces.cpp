#include<iostream>
#include<bits/stdc++.h>

#define si set<int>
#define endl "\n"
#define pi pair<int, int>
#define um unordered_map<int ,int>
#define vvi vector<vector<int>>
#define vi vector<int>
#define pb push_back
#define ll long long
#define lli long long int
#define x sort(arr.begin(), arr.end())
#define rev reverse(arr.begin(), arr.end())
#define mp make_pair
#define v_pair vector<pair<int, int>>


using namespace std;

int main() {
	// your code goes here
	ll n, k;
	cin>>n>>k;
	ll a;
	for(int i=0;i<k;i++){
		cin>>a;
		if(a==0){
			cout<<i<<endl;
			return 0;
		}
	}
	ll b=0;
	for(int i=k;i<n;i++){
		cin>>b;
		if(b!=a){
			cout<<i<<endl;
			return 0;
		}
	}
	cout<<n<<endl;
	return 0;
}
