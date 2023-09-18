#include<bits/stdc++.h>
using namespace std;

int reverse(int n){
	stack<int>st;
	int new_number=0;
	while(n!=0){
		int digit=n%10;
		if(digit==0){
			st.push(digit);
		}
		else{
			new_number=new_number*10+digit;
		}
		n=n/10;
	}
	cout<<new_number<<endl;
	return new_number;
}

int main(){
	int n;
	cin>>n;
	cout<<reverse(n);
	return 0;
}
