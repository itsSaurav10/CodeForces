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
#define x (arr.begin(), arr.end())
#define mp make_pair
#define v_pair vector<pair<int, int>>


using namespace std;

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vi v(n);
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		bool flag=false;
		for(int i=1;i<n-1;i++){
			if(v[i]!=v[i-1] and v[i]!=v[i+1]){
				cout<<i+1<<endl;
				flag=true;
			}
		}
		if(flag==false){
			if(v[0]!=v[1])
				cout<<1<<endl;
			else{
				cout<<n<<endl;
			}
		}
	}
	return 0;
}

