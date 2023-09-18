#include<iostream>
#include<bits/stdc++.h>

#define si set<int>
#define endl "\n"
#define pi pair<int, int>
#define um map<int ,int>
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
#define rep(n) for (int i=0;i<n;i++)
#define irep(n) for (int j=0;j<n;j++)

using namespace std;

int main() {
	ll t;
	cin>>t;
	while(t--){
		um mp;
		ll temp=1;
		ll m;
		cin >> m;
		vi answer(m, 0);
		rep(m){
			ll n;
			cin >> n;
			vi arr(n);
			rep(n){
				cin >> arr[i];
				mp[arr[i]]=temp;
			}
			temp++;
		}
		for(auto it:mp){
			if(it.second<=m){
				answer[it.second-1]=it.first;
			}
		}
		ll val=1;
		rep(m){
			if(answer[i]==0){
				val=0;
			}
		}
		if(val==0){
			cout<<-1<<endl;
		}
		else{
			rep(m){
				cout<<answer[i]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
