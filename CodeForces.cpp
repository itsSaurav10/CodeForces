#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	vector<int>v;
	cin>>n>>k;
	for(int i=1;i<=k;i++){
		if(i%n!=0){
			v.push_back(i);
		}
	}
	for(auto it:v){
		cout<<it<<" ";
	}
	return 0;
}
