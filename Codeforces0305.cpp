#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>

void helper_function(int n){
	vi v(n);
	int count=0;
	int sum=0;
	for(int i=0;i<n;i++){
		cin>>v[i];
		sum=sum+abs(v[i]);
		if(v[i]>=0){
			count++;
		}
	}
//	if(count==n){
//		cout<<accumulate(v.begin(), v.end(), 0)<<"\n";
//	}
	int negative=n-count;
	for(int i=0;i<n;i++){
		if(v[i]<0){
			v[i]=abs(v[i]);
		}
	}
	if(negative%2==0){
		cout<<sum<<"\n";
		return;
	}
	int mini=v[0];
	for(int i=0;i<n;i++){
		mini=min(mini, v[i]);
	}
	cout<<sum-2*mini<<"\n";
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		helper_function(n);
	}
	return 0;
}
