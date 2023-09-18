#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	if(b==0){
		return a;
	}
	return gcd(b, b%a);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, answer=0;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++){
			for(int j=i;j<n;j++){
				if(gcd(a[i],a[j])){
					answer=max(answer, i+j);
				}
			}
		}
		cout<<answer<<endl;
	}
}
