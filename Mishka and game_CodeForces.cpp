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
	ll t;
	cin>>t;
	ll a, b;
	ll m_c=0, c_c=0, d_c=0;
	while(t--){
		cin>>a>>b;
		if(a>b) m_c++;
		else if(b>a) c_c++;
		else d_c++;
	}
	if(d_c==t or m_c==c_c) cout<<"Friendship is magic!^^"<<endl;
	else if(m_c>c_c) cout<<"Mishka"<<endl;
	else cout<<"Chris"<<endl;
	return 0;
}

