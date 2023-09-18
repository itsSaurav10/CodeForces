#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll a, b;
		cin>>a>>b;
		cout<< min(b-a, (b-1)/2)<<endl;
	}
	return 0;
}
