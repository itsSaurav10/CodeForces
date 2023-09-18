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
#define rep(n) for (int i=0;i<n;i++)
#define irep(n) for (int j=0;j<n;j++)

using namespace std;

int main() {
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vi arr;
		arr.pb(1);
		arr.pb(11);
		arr.pb(111);
		arr.pb(1111);
		for(int i=2;i<10;i++){
			for(int j=0;j<4;j++){
				int temp = arr[j] * i;
				arr.pb(temp);
			}
		}
		ll answer = 0;
		int siz = arr.size();
		rep(siz){
			if(arr[i] == n){
				if(arr[i]<10) answer++;
				else if(arr[i]<100) answer = answer+2;
				else if(arr[i]<1000) answer = answer+3;
				else if(arr[i]<10000) answer = answer+4;
				break;
			}
			if(arr[i]<10) answer++;
			else if(arr[i]<100) answer = answer+2;
			else if(arr[i]<1000) answer = answer+3;
			else if(arr[i]<10000) answer = answer+4;
		}
		cout<<answer<<endl;
	}
	return 0;
}
