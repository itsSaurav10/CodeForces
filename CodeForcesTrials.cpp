#include<bits/stdc++.h>
using namespace std;

long long int factorial(long long int n){
	if(n<=1){
		return 1;
	}
	return n*factorial(n-1);
}

int main(){
	int n,x;
	cin>>n>>x;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int factorial_sum=0;
	for(int i=0;i<n;i++){
		factorial_sum=factorial_sum+factorial(arr[i]);
	}
	if(factorial_sum%factorial(x)==0){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}
	return 0;
}
