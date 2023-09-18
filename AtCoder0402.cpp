#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vs vector<string>
#define pb push_back

int main(){
	ll n, k;
	cin>>n>>k;
	vs v;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		if(i<k){
			v.pb(s);
		}
	}
	sort(v.begin(), v.end());
	for(int i=0;i<n;i++){
		cout<<v[i]<<"\n";
	}
	return 0;
}
