#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	
	set<int> s;
	for(int i=0;i<n;i++){
		s.insert(a[i]);
	}
	cout<<s.size();
	cout<<endl;
	string stri;
	cin>>stri;
	set<char>st;
	for(int i=0;i<stri.length();i++) st.insert(stri[i]);
	cout<<st.size();
	return 0;
}
