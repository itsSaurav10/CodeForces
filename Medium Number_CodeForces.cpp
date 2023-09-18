#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		int second;
		if(a>b and b>c){
			cout<<a<<endl;
		}
		else if(a<b and b>c){
			second=b;
			cout<<second<<endl;
		}
		else{
			cout<<c<<endl;
		}
	}
	return 0;
}
