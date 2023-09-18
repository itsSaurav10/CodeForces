#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		while(k>=1){
			int digit=n%10;
			if(digit>0){
				n=n-1;
				k=k-1;
			}
			else if(digit==0){
				n=n/10;
				k=k-1;
			}
		}
		cout<<n<<endl;
	}
	return 0;
}
