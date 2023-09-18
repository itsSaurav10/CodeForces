#include<bits/stdc++.h>
#define vi vector<int>
#define pb push_back
using namespace std;

int main(){
	vi v;
	int t;
	cin>>t;
	int answer;
	while(t--){
		int n,k;
		cin>>n>>k;
		for(int i=1;i<=k;k++){
			if(i%n!=0){
				v.pb(i);
			}
		}
//		answer=v[k-1];
//		break;
	}
	for(auto *it=v.begin();it!=v.end();it++){
		cout<<it<<" ";
	}
	//return answer;
}
