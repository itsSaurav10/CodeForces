#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int price=0;
    for(int i=1;i<=w;i++){
        price+=k*i;
    }
    if(price<n){
    	cout<<0<<endl;
	}
	else{
		cout<<abs(n-price)<<endl;
	}
}
