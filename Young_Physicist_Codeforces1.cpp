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
//#define x sort(arr.begin(), arr.end())
#define rev reverse(arr.begin(), arr.end())
#define mp make_pair
#define v_pair vector<pair<int, int>>


using namespace std;

int main() {
	// your code goes here
	ll t;
	cin>>t;
	ll sumx=0, sumy=0, sumz=0;
	while(t--){
		ll x,y,z;
		cin>>x>>y>>z;
		sumx=sumx+x;
		sumy=sumy+y;
		sumz=sumz+z;
	}
	if(sumx==0 and sumy==0 and sumz==0){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}
