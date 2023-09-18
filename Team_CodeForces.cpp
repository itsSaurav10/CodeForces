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
#define rev reverse(arr.begin(), arr.end())
#define mp make_pair
#define v_pair vector<pair<int, int>>


using namespace std;

int main() {
	// your code goes here
	ll n;
	cin>>n;
	ll answer=0;
	for(int i=0;i<n;i++){
		vi v(3);
		ll count1=0;
		for(int i=0;i<3;i++){
			cin>>v[i];
			if(v[i]==1){
				count1++;
			}
		}
		ll count0=3-count1;
		if(count1>count0){
			answer++;
		}
	}
	cout<<answer<<endl;
	return 0;
}

